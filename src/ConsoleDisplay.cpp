//
//ConsoleDisplay source file.
//

#include "ConsoleDisplay.h"
void ConsoleDisplay::showBoard(Board &b) {
  cout << b;
}
void ConsoleDisplay::showMessage(string s) {
  cout << s;
}
void ConsoleDisplay::showPossibleMoves(vector<Point> &v) {
  for(int i = 0; i < v.size(); i++) {
    cout << v[i];
    if (i != v.size() - 1) {
      cout << ",";
    }
  }
  cout << endl;
}
void ConsoleDisplay::showScore(Player &p1, Player &p2) {
  cout << "Current score: " << (char) p1.getSign() << ": " << p1.getSoldiers()
       << ", " << (char) p2.getSign() << ": " << p2.getSoldiers() << endl;
}
void ConsoleDisplay::showTurn(Player &currentPlayer) {
  cout << (char) currentPlayer.getSign() << ": It's your move:" << endl;
}
void ConsoleDisplay::showMenu(int &type, int &rules, int &boardSize) {
  bool boardBool = false, rulesBool = false, typeBool = false;
  //Asks for game type.
  while(!typeBool) {
    cout << "Please choose game type:\n"
        "1.Player vs. Player.\n"
        "2.Player vs. Computer."<< endl;
    cin >> type;
    cin.clear();
    cin.ignore(100, '\n');
    if(type == 0 || type > 2){
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
}
void ConsoleDisplay::showEndGame(Player &p1, Player &p2) {
  char winner, loser;
  int winScore;
  if (p1.getSoldiers() == p2.getSoldiers()) {
    cout << "Game ended with a tide." << endl;
    return;
  }
  if (p1.getSoldiers() > p2.getSoldiers()) {
    winner = p1.getSign();
    winScore = p1.getSoldiers();
    loser = p2.getSign();
  } else {
    winner = p2.getSign();
    winScore = p2.getSoldiers();
    loser = p1.getSign();
  }
  cout << "Winner is: " << winner << " with a score of "
       << winScore << " points! :)" << endl;
  cout << loser << " maybe next time :(" << endl;
}