/*
 * Created by Eilon Bashari, 308576933.
 * main file.
 */

#include "Play.h"
int main() {
  Board b;
  ConsolePlayer cp1, cp2;
  Play p(b, cp1, cp2);
  p.run();
  return 0;
}