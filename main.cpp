/*
 * Created by Eilon Bashari, 308576933.
 * main file.
 */

#include "includes/Game.h"
#include "includes/GameMenu.h"

int main() {
  GameMenu gm;
  Game p = gm.showMenu();
  p.run();
  return 0;
}