//
// Created by dandan on 21/11/17.
//

#include <algorithm>
#include "AIPlayer.h"
#include "Game.h"
using namespace std;
//Constructors.
AIPlayer::AIPlayer(SIGN sign, Rules &r): sign(sign), numOfSoldiers(2), rules(&r)  {}
AIPlayer::AIPlayer(): sign(EMPTY), numOfSoldiers(2) {}
AIPlayer::AIPlayer(const AIPlayer &AIp) {
    this->sign = AIp.sign;
    this->numOfSoldiers = AIp.numOfSoldiers;
}


//Get point from user.
Point AIPlayer::getPointFromPlayer(Board b, vector<Point> v) {
    //checks if there is only one possible move
    Point p;
    if(v.size() == 1) {
        p.setPoint(v[0].getX(), v[0].getY());
        return p;
    }
    //this is a vector witch contains pairs of  score(int)/Point.
    vector<pair<int, Point>> pointToScore;
    SIGN oppSign = XSIGN;
    if (this->sign == oppSign) {
        oppSign = OSIGN;
    }
    //for each possible move simulates a board with that move.
        for (int i = 0; i < v.size(); i++) {
            Board b1 = b;
            ConsolePlayer cp;
            Game tempP(b1, *this, cp, *this->rules);
            int score = 0;
            tempP.playOneTurn(v[i], sign);

            if (b1.hasSpaceOnBoard()) {
                vector<Point> v2 = tempP.checkAllMoves(oppSign);
                //for each move the opponent can do calculates the score he will get in that move.
                for (int j = 0; j < v2.size(); j++) {
                    Board b2 = b1;

                    Game innerTempPlay(b2, cp, *this, *this->rules);
                    cp.setSign(oppSign);
                    int tempScore(innerTempPlay.playOneTurn(v2[j], cp.getSign()));
                    //saves the point of the highest score.
                    if (tempScore > score) {
                        score = tempScore;
                        pointToScore.push_back(pair<int,Point>(score, v[i]));
                    }
                };
            };
        }
    sort(pointToScore.begin(), pointToScore.end());
    if (!pointToScore.empty()) {
        p.setPoint(pointToScore[0].second.getX(), pointToScore[0].second.getY());
    }
    this->setSign(sign);
  return p;
}


