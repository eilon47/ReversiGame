/*
* GameMenu source file.
*/

#include "GameMenu.h"
#include "AIPlayer.h"
#include "RegularRules.h"
#include "NetworkPlayer.h"
#include "NetworkReadPlayer.h"

GameMenu::GameMenu(Display &display) {
    this->d = &display;
}
Game* GameMenu::showMenu() {
    int boardSize = 0,rules = 0,type = 0;
    //Show menu with display and change the values of board rules and type.
    this->d->showMenu(type, rules, boardSize);
    if(type == 4) {
        return NULL;
    }
    //Creating the wanted game.
    switch (rules) {
        case 1: {
            this->r = new RegularRules;
            break;
        }
        default:{
            this->r = new RegularRules;
            break;
        }
    }
    switch(type) {
        case 1: {
            this->p1 = new HumanPlayer(XSIGN);
            this->p2 = new HumanPlayer(OSIGN);
            gtype = PvsP;
            break;
        }
        case 2: {
            this->p1 = new HumanPlayer(XSIGN);
            this->p2 = new AIPlayer(OSIGN, *(this->r));
            gtype = PvsAI;
            break;
        }
        case 3: {
            try {
                gtype = PvsRP;
                string command;
                client = new Client("127.0.0.1", 8000, *this->d);
                this->p1 = new NetworkPlayer(*client);
                this->p2 = new NetworkReadPlayer(*client);
                while (true) {
                    this->d->showSubMenu(command);
                    this->client->sendCommand(command);
                    bool startGame = this->getInformationFromServer(command);
                    if (startGame) {
                        break;
                    }
                }
                }catch (const char* msg) {
                    d->showMessage(msg);
                    return NULL;
                }
                //Waits for other player.
                if(client->getNum() == 1) {
                  break;
                } else {
                  this->d->showMessage("Problem in connection to the other player");
                  exit(1);
                }
            }
            default:{
                this->p1 = new HumanPlayer(XSIGN);
                this->p2 = new HumanPlayer(OSIGN);
                gtype = PvsP;
                break;
            }
        }
            this->b = new Board(boardSize);
            this->game = new Game(*this->b, *this->p1, *this->p2, *this->r, *this->d, gtype);
            return game;
    }

    bool GameMenu::getInformationFromServer(string command) {
      char str[command.size()];
      strcpy(str, command.c_str());
      string s = strtok(str, " ");
      int res = this->client->getNum();
      if (s == "start") {
          if(res != -1){
            this->p1->setSign(XSIGN);
            this->p2->setSign(OSIGN);
            d->showMessage("waiting for other Player to connect...");
            return true;
          }
          return false;
        }
        if (s == "join") {
            if (res == -1) {
                return false;
            }
            this->p1->setSign(OSIGN);
            this->p2->setSign(XSIGN);
            return true;
        }
        if (s == "list_games") {
            if(res == 0) {
              this->d->showMessage("There are no open games\n");
            } else {
              for (int i = 0; i < res; i++) {
                d->showMessage(client->getMessage() + "\n");
              }
            }
          return false;
        }
        d->showMessage("Please enter a valid command.\n");
        return false;
    }


//Destructor.
    GameMenu::~GameMenu() {
        if(gtype == PvsRP) {
            delete client;
        }
        delete b;
        delete p1;
        delete p2;
        delete r;
    }