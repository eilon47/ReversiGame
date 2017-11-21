/*
 * Created by Eilon Bashari, 308576933.
 * main file.
 */

#include "Play.h"
#include "AIPlayer.h"
#include "RegularRules.h"

int main() {
  Board b;
  ConsolePlayer cp1, cp2;
  RegularRules rules;
  AIPlayer p1('O', rules);
  Play p(b, cp1, p1, rules);
  p.run();
  return 0;
}