//
// Created by dandan on 21/11/17.
//

#ifndef REVERSIGAME_AIPLAYER_H
#define REVERSIGAME_AIPLAYER_H


#include "Player.h"
#include "Board.h"
#include "Rules.h"

class AIPlayer : public Player {
public:
    /**
     * Constructor.
     * @param sign sign.
     */
    explicit AIPlayer(char sign, Rules &r);
    /**
     * Default Constructor.
     */
    AIPlayer();
    /**
     * Copy constructor.
     * @param cp
     */
    AIPlayer(const AIPlayer &cp);
    /**
     * getPointFromPlayer.
     * Ask the player to enter a point for the next move.
     * @param p point to change.
     * @param v vector of possible moves.
     */
    void getPointFromPlayer(Board b, Point &p, vector<Point> v);
private:
    char sign;
    int numOfSoldiers;
    Rules *rules;
};


#endif //REVERSIGAME_AIPLAYER_H