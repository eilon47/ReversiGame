//
// Created by dandan on 28/11/17.
//


#include <gtest/gtest.h>
#include "../includes/Board.h"
#include "../includes/Game.h"
#include "../includes/RegularRules.h"

class RulesTest: public testing::Test {
public:
    RulesTest(): rules() {}
protected:
    RegularRules rules;
};
TEST_F(RulesTest, ValidPointTest) {

    Board b1;
    Board b2(b1), b3(b1);
    for(int i = 0; i < b1.getSize(); i++) {
        for (int j = 0; j < b1.getSize(); j++) {
            b2.addToBoard('X', i, j);
            b3.addToBoard(' ', i, j);
        }
    }
    int middle = b1.getSize() /2;
    Point p(middle,middle), p1(middle-1,middle), p2(middle +1,middle);
    //cout << b1;
    EXPECT_FALSE(rules.checkPoint(b1, p, 'X'));
    EXPECT_TRUE(rules.checkPoint(b1, p1, 'X'));
    EXPECT_FALSE(rules.checkPoint(b1, p2, 'X'));
    //checks when the board is full or when its empty.
    for(int i = 1; i < b2.getSize(); i++) {
        for (int j = 1; j < b2.getSize(); j++) {
            Point temp(i, j);
            EXPECT_FALSE(rules.checkPoint(b2, temp, 'X'));
            EXPECT_FALSE(rules.checkPoint(b3, temp, 'X'));
        }
    }
    //checks if a change in the board actually effect the rules.
    b1.addToBoard('X',1,1);
    b1.addToBoard('X',2,1);
    b1.addToBoard('X',3,1);
    Point p3(4,1);
    EXPECT_FALSE(rules.checkPoint(b1,p3,'O'));
    b1.addToBoard('O',1,1);
    EXPECT_TRUE(rules.checkPoint(b1,p3,'O'));
    //checks out of bounds.
    Point p4(-1,-1);
    ASSERT_FALSE(rules.checkPoint(b1,p4, 'X'));
}