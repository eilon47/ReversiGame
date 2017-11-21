/*
 * Created by Eilon Bashari, 308576933.
 * main file.
 */

#include "Play.h"
#include "RegularRules.h"

int main() {
  Board b;
  RegularRules rules;
  ConsolePlayer cp1, cp2;
  Play p(b, cp1, cp2, rules);
  p.run();
  return 0;
}