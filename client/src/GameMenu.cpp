/*
* GameMenu source file.
*/

#include "GameMenu.h"
#include "AIPlayer.h"
#include "RegularRules.h"
#include "NetworkPlayer.h"

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
  GAME_T gtype;
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
      boardSize = 8;
      this->b = new Board(boardSize);
      Client client("127.0.0.1", 8000);
      this -> p1 = new NetworkPlayer(client);
      Game g(*this->b,*this->p1,*this->r, *this->d, gtype);
      return g;
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
  delete b;
  delete p1;
  delete p2;
  delete r;
}