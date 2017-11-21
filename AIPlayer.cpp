//
// Created by dandan on 21/11/17.
//

#include <algorithm>
#include <map>
#include "AIPlayer.h"
#include "Play.h"
using namespace std;
//Constructors.
AIPlayer::AIPlayer(char sign): sign(sign), numOfSoldiers(2)  {}
AIPlayer::AIPlayer(): sign(' '), numOfSoldiers(2) {}
AIPlayer::AIPlayer(const AIPlayer &AIp) {
    this->sign = AIp.sign;
    this->numOfSoldiers = AIp.numOfSoldiers;
}
//Get point from user.
void AIPlayer::getPointFromPlayer(Board b, Point &p, vector<Point> v) {
    Point lowestOppScore;
    map<int,Point> pointToScore;
    char oppSign = 'X';
    if (this->sign == oppSign) {
        oppSign = 'O';
    }
        for (int i = 0; i < v.size(); i++) {
            Board b1 = b;
            ConsolePlayer cp;
            Play tempP(b1, cp, *this);
            int score = 0;
            tempP.playOneTurn(v[i]);

            if (b1.hasSpaceOnBoard()) {
                vector<Point> v2 = tempP.checkAllMoves();
                for (int j = 0; j < v2.size(); j++) {
                    Board b2 = b1;
                    int tempScore = tempP.playOneTurn(v2[j]);
                    if (tempScore > score) {
                        score = tempScore;
                        pointToScore.insert(pair<int,Point>(score, v[i]));
                    }
                };
            };
    }
    //sort(pointToScore.begin(), pointToScore.end(), pointToScore.value_comp(pointToScore.begin(),pointToScore.end()));
    p.setPoint(pointToScore[0].getX(), pointToScore[0].getY());
}

