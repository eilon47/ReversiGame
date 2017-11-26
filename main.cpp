/*
 * Created by Eilon Bashari, 308576933.
 * main file.
 */

#include "Game.h"
#include "GameMenu.h"

int main() {
  GameMenu gm;
  Game p = gm.showMenu();
  p.run();
  return 0;
}