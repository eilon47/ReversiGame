//
// Created by elon on 21/11/17.
//

#include "../includes/RegularRules.h"
bool RegularRules::checkPoint(const Board b,const Point p, char player) const {
  if (p.getX() < 0 || p.getY() <0) {
    return false;
  }
  for(int i = -1; i < 2; i++) {
    for(int j = -1; j < 2; j++) {
      if( i == 0 && j ==0) {
        continue;
      }
      if(checkInDirection(b, p, player, i, j)){
        return true;
      }
    }
  }
  return false;
}
bool RegularRules::checkInDirection(Board b,const Point p, char player, int jumpRow, int jumpCol) const {
  int row = p.getX() + jumpRow;
  int col = p.getY() + jumpCol;
  if(row >= b.getSize() || col >= b.getSize() || row == 0 || col == 0) {
    return false;
  }
  if(b.getBoard()[row][col] != player) {
    while (b.getBoard()[row][col] != player) {
      char c = b.getBoard()[row][col];
      if (c == ' ') { return false; }
      row += jumpRow;
      col += jumpCol;
      if(row >= b.getSize() || col >= b.getSize() || row == 0 || col == 0) {
        return false;
      }
    }
    return true;
  }
  return false;
}
