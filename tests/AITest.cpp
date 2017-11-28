//
// Created by dandan on 27/11/17.
//

#include <gtest/gtest.h>
#include "AIPlayer.h"
#include "RegularRules.h"
#include "Game.h"

class AITest: public testing::Test {
};

TEST_F(AITest, InitialTest) {
  Board b;
  Rules reg;
  SIGN s1 = XSIGN;
  SIGN s2 = OSIGN;
  ConsolePlayer p1(s1);
  AIPlayer ai(s2,reg);
  Game g(b,p1,ai,reg);
  Point p(3,4);
  g.playOneTurn(p,p1.getSign());
  Point pRes = ai.getPointFromPlayer(b,g.checkAllMoves(ai.getSign()));
  Point pThree(3,3);
  EXPECT_EQ(pThree, pRes);
}


