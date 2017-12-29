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
                string command("");
                client = new Client("127.0.0.1", 8000, *this->d);
                this->p1 = new NetworkPlayer(*client);
                this->p2 = new NetworkReadPlayer(*client);
                while (command != "join") {
                    this->d->showSubMenu(command);
                    this->client->sendCommand(command);
                    this->getCommandFromServer(command);
                    if (command == "start") {
                        break;
                    }
                }
                }catch (const char* msg) {
                    d->showMessage(msg);
                    return NULL;
                }
                d->showMessage(client->getMessage());
                break;
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

    void GameMenu::getCommandFromServer(string &c) {
        char str[c.size()];
        strcpy(str, c.c_str());
        string s = strtok(str, " ");
        if (s == "start") {
            this->p1->setSign(XSIGN);
            this->p2->setSign(OSIGN);
            d->showMessage("waiting for other Player to connect...");
            atoi(client->getMessage().c_str());
            return;
        }
        if (s == "join") {
            int isAvailable = atoi(client->getMessage().c_str());
            if (isAvailable == -1) {
                c = "mistake";
                return;
            }
            this->p1->setSign(OSIGN);
            this->p2->setSign(XSIGN);
            return;
        }
        if (s == "games_list") {
            int gameListSize = atoi(client->getMessage().c_str());
            for (int i=0; i< gameListSize; i++) {
                d->showMessage(client->getMessage());
            }
        }
        d->showMessage("Please enter a valid command.\n");
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