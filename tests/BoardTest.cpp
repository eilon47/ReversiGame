//
// Created by dandan on 27/11/17.
//

#include <gtest/gtest.h>
#include "../AIPlayer.h"
#include "../RegularRules.h"
#include "../Game.h"

class BoardTest: public testing::Test {

public:
    BoardTest() : b() {}

protected:
     Board b;
};
    TEST_F(BoardTest, SetTest) {
        int middle = b.getSize() / 2;
        EXPECT_EQ(9,b.getSize()) << ("board size is not correct");
        //EXPECT_TRUE(b.getBoard()[-1][-1] == NULL);
        for(int i = 0; i < b.getSize(); i++) {
            for (int j = 0; j < b.getSize(); j++) {
                EXPECT_TRUE(b.getBoard()[i][j] != NULL) << ("not null");
            }
        }
        EXPECT_EQ(b.getBoard()[middle][middle],'O') << ("mid is not O");
        EXPECT_EQ(b.getBoard()[middle + 1][middle + 1],'O') << ("mid is not O");
        EXPECT_EQ(b.getBoard()[middle][middle + 1],'X') << ("mid is not X");
        EXPECT_EQ(b.getBoard()[middle + 1][middle],'X') << ("mid is not X");
    }

TEST_F(BoardTest, AddTest) {
    b.addToBoard('X', 6, 6);
    b.addToBoard('O', 2, 2);
    EXPECT_EQ('X',b.getBoard()[6][6]);
    EXPECT_EQ('O',b.getBoard()[2][2]);
    EXPECT_NE('O',b.getBoard()[1][1]);
    EXPECT_NE('X',b.getBoard()[7][7]);

}

TEST_F(BoardTest, HasSpaceTest ) {
    EXPECT_TRUE(b.hasSpaceOnBoard());
    for(int i = 0; i < b.getSize(); i++) {
        for (int j = 0; j < b.getSize(); j++) {
            b.addToBoard('X', i, j);
        }
    }
    EXPECT_TRUE(!b.hasSpaceOnBoard());
}
TEST_F(BoardTest, FlipTest ) {
    int middle = b.getSize() / 2;
    Point p(middle -1,middle);
    //b.flip(p,'X', 1, 0);
    //EXPECT_EQ(b.getBoard()[middle][middle], 'X');
    for(int i = -1; i < 2; i++) {
        for(int j = -1; j < 2; j++) {
            Board tempBoard = b;
            if( i == 0 && j ==0) {
                continue;
            }
            tempBoard.flip(p,'X', i, j);
            if (i == 1 && j ==0) {
                EXPECT_EQ(tempBoard.getBoard()[middle][middle], 'X');
            } else {
                EXPECT_NE(tempBoard.getBoard()[middle][middle], 'X');

            }
        }
    }
}



