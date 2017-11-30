
#include "Game.h"
#include "GameMenu.h"

int main() {
  GameMenu gm;
  Game p = gm.showMenu();
  p.run();
  return 0;
}