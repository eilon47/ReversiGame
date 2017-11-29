/*
 * Created by Eilon Bashari, 308576933.
 * main file.
 */

#include "src/Game.h"
#include "src/GameMenu.h"

int main() {
  GameMenu gm;
  Game p = gm.showMenu();
  p.run();
  return 0;
}