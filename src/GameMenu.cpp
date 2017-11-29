/*
* Created by Eilon Bashari and Daniel Greenspan
* GameMenu source file.
*/

#include "GameMenu.h"
#include "AIPlayer.h"
#include "RegularRules.h"
Game GameMenu::showMenu() {
  int boardSize = 0,rules = 0,type = 0;
  bool boardBool = false, rulesBool = false, typeBool = false;
  //Asks for game type.
  while(!typeBool) {
    cout << "Please choose game type:\n"
        "1.Player vs. Player.\n"
        "2.Player vs. Computer.\n"
        "3.Computer vs. Computer" << endl;
    cin >> type;
    cin.clear();
    cin.ignore(100, '\n');
    if(type == 0 || type > 3){
      cout << "Please enter valid choice" << endl;
      type = 0;
      continue;
    } else {
      typeBool = true;
    }
  }
  //Asks for Board size.
  while (!boardBool) {
    cout << "Please enter board size:\n";
    cin >> boardSize;
    cin.clear();
    cin.ignore(100, '\n');
    if(boardSize < 4){
      cout << "Please enter valid choice" << endl;
      boardSize = 0;
      continue;
    } else {
      boardBool = true;
    }
  }
  //Asks for rules type.
  while(!rulesBool) {
    cout << "Please choose game rules:\n"
        "1.Regular game." << endl;
    cin >> rules;
    cin.clear();
    cin.ignore(100, '\n');
    if(rules != 1){
      cout << "Please enter valid choice" << endl;
      rules = 0;
      continue;
    } else {
      rulesBool = true;
    }
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
      this->p1 = new ConsolePlayer(XSIGN);
      this->p2 = new ConsolePlayer(OSIGN);
      break;
    }
    case 2: {
      this->p1 = new ConsolePlayer(XSIGN);
      this->p2 = new AIPlayer(OSIGN, *(this->r));
      break;
    }
    case 3: {
      this->p1 = new AIPlayer(XSIGN, *(this->r));
      this->p2 = new AIPlayer(OSIGN, *(this->r));
      break;
    }
    default:{
      this->p1 = new ConsolePlayer(XSIGN);
      this->p2 = new ConsolePlayer(OSIGN);
      break;
    }
  }
  this->b = new Board(boardSize);
  Game p(*this->b, *this->p1, *this->p2, *this->r);
  return p;
}
//Destructor.
GameMenu::~GameMenu() {
  delete b;
  delete p1;
  delete p2;
  delete r;
}