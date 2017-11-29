/*
 * Created by Daniel Greenspan and Eilon Bashari.
 * ConsolePlayer class derived from Player class.
 */

#include <algorithm>
#include "ConsolePlayer.h"
//Constructors.
ConsolePlayer::ConsolePlayer(SIGN sign): sign(sign), numOfSoldiers(2)  {}
ConsolePlayer::ConsolePlayer(): sign(EMPTY), numOfSoldiers(2) {}
ConsolePlayer::ConsolePlayer(const ConsolePlayer &cp) {
  this->sign = cp.sign;
  this->numOfSoldiers = cp.numOfSoldiers;
}
//Get point from user.
Point ConsolePlayer::getPointFromPlayer(Board b, vector<Point> v) {
  //Prints the possible moves.
  sort(v.begin(), v.end());
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
  Point p;
  //Checks the values are in the right range.
  if (row > b.getSize() || row <= 0 || col > b.getSize() || col <=0) {
    cout << "Wrong entry." << endl;
    return p;
  }
  p.setPoint(row, col);
  return p;
}
