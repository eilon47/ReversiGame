/*
 * main file.
 */

#include "ConsoleDisplay.h"
#include "Game.h"
#include "GameMenu.h"
int main() {
  while(true) {
    Display *d = new ConsoleDisplay;
    GameMenu gm(*d);
    Game *p;
    p = gm.showMenu();
    if(p == NULL) {
      delete d;
        if (gm.toEndGAME()) {
            break;
        }
        continue;
    }
    p->run();
    delete d;
  }
}