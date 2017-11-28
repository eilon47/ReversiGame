//
// Created by elon on 21/11/17.
//

#ifndef REVERSIGAME_REGULARRULES_H
#define REVERSIGAME_REGULARRULES_H

#include "Rules.h"
class RegularRules : public Rules {
 public:
  bool checkPoint(const Board b,const Point p, char player) const;
 private:
  bool checkInDirection(Board b,const Point p, char player, int jumpRow, int jumpCol) const;
};

#endif //REVERSIGAME_REGULARRULES_H
