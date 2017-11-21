//
// Created by elon on 21/11/17.
//

#ifndef REVERSIGAME_RULES_H
#define REVERSIGAME_RULES_H

#include "Board.h"
class Rules {
 public:
  virtual bool checkPoint(Board b, Point p, char player) const = 0;
};

#endif //REVERSIGAME_RULES_H
