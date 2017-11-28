//
// Created by dandan on 28/11/17.
//

#include <gtest/gtest.h>
#include "../includes/Board.h"
#include "../includes/Game.h"
#include "../includes/AIPlayer.h"
#include "../includes/RegularRules.h"

class GameTest: public testing::Test {
};
TEST_F(GameTest, SetTest) {
    Board b;
    ConsolePlayer p1,p2, p3, p4;
    AIPlayer p5, p6, p7, p8;
    RegularRules rules;

    Game g1(b,p1,p2,rules);
    //checks if initialization went well with two Console players.
    EXPECT_EQ(g1.currentPlayer()->getSign(), 'X');
    EXPECT_EQ(g1.currentOpp()->getSign(), 'O');

    Game g2(b,p5,p6,rules);
    //checks if initialization went well with two AI players.
    EXPECT_EQ(g2.currentPlayer()->getSign(), 'X');
    EXPECT_EQ(g2.currentOpp()->getSign(), 'O');

    //initialize Console as X and AI as O
    Game g3(b,p3,p7,rules);
    EXPECT_EQ(g3.currentPlayer()->getSign(), 'X');
    EXPECT_EQ(g3.currentOpp()->getSign(), 'O');

    //initialize AI as X and Console as O
    Game g4(b,p8,p4,rules);
    EXPECT_EQ(g4.currentPlayer()->getSign(), 'X');
    EXPECT_EQ(g4.currentOpp()->getSign(), 'O');

    //checks if copy constructor works.
    Game g5(g4);
    EXPECT_EQ(g5.currentPlayer()->getSign(), 'X');
    EXPECT_EQ(g5.currentOpp()->getSign(), 'O');


}
TEST_F(GameTest, GetPossibleMovesTest) {
    Board b;
    Point p;
    ConsolePlayer p1,p2, p3, p4;
    AIPlayer p5, p6, p7, p8;
    RegularRules rules;
    Game g1(b,p1,p2,rules);
    vector<Point> v = g1.checkAllMoves('X');
    //checks if possible moves vector is correct.
    int numOfMoves = v.size();
    EXPECT_EQ(4,numOfMoves);
    p.setPoint(3,4);
    EXPECT_EQ(v[0],p);
    p.setPoint(4,3);
    EXPECT_EQ(v[1],p);
    p.setPoint(5,6);
    EXPECT_EQ(v[2],p);
    p.setPoint(6,5);
    EXPECT_EQ(v[3],p);
    //checks if returns (0,0) when there is no moves.
    b.addToBoard(' ', 4, 4);
    b.addToBoard(' ', 5, 5);
    b.addToBoard(' ', 4, 5);
    b.addToBoard(' ', 5, 4);
    v = g1.checkAllMoves('X');
    p.setPoint(0,0);
    EXPECT_EQ(v[0], p);
    for(int i = 0; i < b.getSize(); i++) {
        for (int j = 0; j < b.getSize(); j++) {
            b.addToBoard('X', i, j);
        }
    }
    //checks when the board is full and checks checkVecHasPoint method.
    v = g1.checkAllMoves('X');
    EXPECT_TRUE(g1.checkVecHasPoint(v,p));
}


