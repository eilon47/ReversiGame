/*
* Class for GameMenu.
* GameMenu is charge to show to the user the game options and create it.
*/


/**
 * GameMenu header file.
 */

#ifndef REVERSIGAME_GAMEMENU_H
#define REVERSIGAME_GAMEMENU_H

#include "Game.h"
class GameMenu {
 public:
  /**
   * Constructor.
   * @param display to show menu.
   */
  GameMenu(Display &display);
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
  Display *d;
};

#endif //REVERSIGAME_GAMEMENU_H
