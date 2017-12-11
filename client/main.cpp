/*
 * Created by Eilon Bashari, 308576933.
 * main file.
 */

#include "ConsoleDisplay.h"
#include "Game.h"
#include "GameMenu.h"
int main() {
  while(true) {
    Display *d = new ConsoleDisplay;
    GameMenu gm(*d);
    Game p = gm.showMenu();
    p.run();
    delete d;
  }
  return 0;
}