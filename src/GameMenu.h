/**
 * GameMenu header file.
 * GameMenu is charge to show to the user the game options and create it.
 */

#ifndef REVERSIGAME_GAMEMENU_H
#define REVERSIGAME_GAMEMENU_H

#include "Game.h"
class GameMenu {
 public:
  /**
   * showMenu.
   * Shows the menu to the user and creating a game by it's request.
   * @return game type.
   */
  Game showMenu();
  /**
   * Destructor.
   */
  ~GameMenu();
 private:
  Board *b;
  Rules *r;
  Player *p1;
  Player *p2;
};

#endif //REVERSIGAME_GAMEMENU_H
