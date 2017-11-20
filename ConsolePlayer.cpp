//
// Created by Eilon Bashari.
// Class for console player . inheritor from class Player.
//

#include "ConsolePlayer.h"
//Constructors.
ConsolePlayer::ConsolePlayer(char sign): sign(sign), numOfSoldiers(2)  {}
ConsolePlayer::ConsolePlayer(): sign(' '), numOfSoldiers(2) {}
ConsolePlayer::ConsolePlayer(const ConsolePlayer &cp) {
  this->sign = cp.sign;
  this->numOfSoldiers = cp.numOfSoldiers;
}
//Get point from user.
void ConsolePlayer::getPointFromPlayer(Point &p, vector<Point> v) {
  //Prints the possible moves.
  for(int i = 0; i < v.size(); i++) {
    cout << v[i];
    if (i != v.size() - 1) {
      cout << ",";
    }
  }
  int row = 0, col = 0;
  cout << endl << "Please enter your move: row col" << endl;
  cin >> row >> col;
  cin.clear();
  cin.ignore(100, '\n');
  //Checks the values are in the right range.
  if (row > 8 || row <= 0 || col > 8 || col <=0) {
    cout << "Wrong entry. " << endl;
    return;
  }
  p.setPoint(row, col);
}
