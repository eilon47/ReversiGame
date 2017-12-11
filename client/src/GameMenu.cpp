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
Game GameMenu::showMenu() {
  int boardSize = 0,rules = 0,type = 0;
  //Show menu with display and change the values of board rules and type.
  this->d->showMenu(type, rules, boardSize);
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
      gtype = PvsRP;
      client = new Client("127.0.0.1", 8500);
      this->p1 = new NetworkPlayer(*client);
      this->p2 = new NetworkReadPlayer(*client);
      this->d->showMessage(client->getMessage());
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
  Game p(*this->b, *this->p1, *this->p2, *this->r, *this->d, gtype);
  return p;
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