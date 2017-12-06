//
// Created by dandan on 05/12/17.
//

#include "NetworkPlayer.h"
#include "Client.h"
#include "Game.h"

NetworkPlayer::NetworkPlayer() : client("127.0.0.1", 1207) {
    client.connectToServer();
    if (client.getClientSign() == 1) {
        this->sign == XSIGN;
        myTurn = true;
    }
    else if (client.getClientSign() == 2) {
        myTurn = false;
        this->sign == OSIGN;
    }
}

Point NetworkPlayer::getPointFromPlayer(Board b, vector<Point> v) {
    if(myTurn) {
        int row = 0, col = 0;
        cin >> row >> col;
        cin.clear();
        cin.ignore(100, '\n');
        Point p;
        //Checks the values are in the right range.
        if (row > b.getSize() || row <= 0 || col > b.getSize() || col <= 0) {
            return p;
        }
        p.setPoint(row, col);
        client.sendMove(p);
        myTurn = false;
        return p;
    }
    else {
        Point p(client.getMove());
        myTurn = true;
        return p;
    }
}