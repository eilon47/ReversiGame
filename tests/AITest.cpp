//
// Created by dandan on 27/11/17.
//

#include <gtest/gtest.h>
#include "../includes/AIPlayer.h"
#include "../includes/RegularRules.h"
#include "../includes/Game.h"

class AITest: public testing::Test {

public:
    AITest(): b(),r(), p1(), p2(), p3(), g1(b,p1,p2,r), g2(b,p1,p3,r) {}

protected:

    RegularRules r;
    AIPlayer p1, p2, p3;
    Game g1,g2;
    Board b;
};


