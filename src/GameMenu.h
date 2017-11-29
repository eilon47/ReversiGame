//
// Created by elon on 26/11/17.
//

#ifndef REVERSIGAME_GAMEMENU_H
#define REVERSIGAME_GAMEMENU_H

#include "Game.h"
class GameMenu {
 public:
  Game showMenu();
  ~GameMenu();
 private:
  Board *b;
  Rules *r;
  Player *p1;
  Player *p2;
};

#endif //REVERSIGAME_GAMEMENU_H
