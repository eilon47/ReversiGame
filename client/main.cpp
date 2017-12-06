/*
 * Created by Eilon Bashari, 308576933.
 * main file.
 */

#include "ConsoleDisplay.h"
#include "Game.h"
#include "GameMenu.h"
#include "../server/Server.h"
int main() {
  Display *d = new ConsoleDisplay;
  GameMenu gm(*d);
  Game p = gm.showMenu();
  p.run();
  delete d;
  return 0;
}