//
// Created by dandan on 05/12/17.
//

#ifndef REVERSIGAME_NETWORKPLAYER_H
#define REVERSIGAME_NETWORKPLAYER_H


#include "Player.h"
#include "AIPlayer.h"
#include "Client.h"

class NetworkPlayer : public Player {
    public:
        /**
         * Constructor.
         * @param sign sign.
         */
        explicit NetworkPlayer(SIGN sign, Rules &r);
        /**
         * Default Constructor.
         */
        NetworkPlayer();
        /**
         * Copy constructor.
         * @param cp
         */
        NetworkPlayer(const AIPlayer &cp);
        /**
         * getPointFromPlayer.
         * Ask the player to enter a point for the next move.
         * @param b current board.
         * @param v vector of possible moves.
         * @return Point the player chose.
         */
        Point getPointFromPlayer(Board b, vector<Point> v);

        void play();
    private:
        SIGN sign;
        int numOfSoldiers;
        Rules *rules;
        Client client;
        bool myTurn;
    };

#endif //REVERSIGAME_NETWORKPLAYER_H
