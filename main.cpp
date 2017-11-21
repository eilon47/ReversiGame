/*
 * Created by Eilon Bashari, 308576933.
 * main file.
 */

#include "Play.h"
#include "AIPlayer.h"

int main() {
  Board b;
  ConsolePlayer cp1, cp2;
  AIPlayer p1;
  Play p(b, cp1, p1);
  p.run();
  return 0;
}