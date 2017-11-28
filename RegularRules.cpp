//
// Created by elon on 21/11/17.
//

#include "RegularRules.h"
#include "Sign.h"

bool RegularRules::checkPoint(const Board b,const Point p, SIGN sign) const {
  if (p.getX() < 0 || p.getY() <0) {
    return false;
  }
  for(int i = -1; i < 2; i++) {
    for(int j = -1; j < 2; j++) {
      if( i == 0 && j ==0) {
        continue;
      }
      if(checkInDirection(b, p, sign, i, j)){
        return true;
      }
    }
  }
  return false;
}
bool RegularRules::checkInDirection(Board b,const Point p, SIGN sign, int jumpRow, int jumpCol) const {
  int row = p.getX() + jumpRow;
  int col = p.getY() + jumpCol;
  if(row >= b.getSize() || col >= b.getSize() || row == 0 || col == 0) {
    return false;
  }
  if(b.getBoard()[row][col].getSign() != sign) {
    while (b.getBoard()[row][col].getSign() != sign) {
      SIGN s = b.getBoard()[row][col].getSign();
      if (s == EMPTY ) { return false; }
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
