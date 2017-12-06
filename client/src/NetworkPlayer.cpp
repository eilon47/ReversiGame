//
// Created by dandan on 05/12/17.
//

#include "NetworkPlayer.h"
#include "Client.h"
#include "Game.h"

NetworkPlayer::NetworkPlayer(Client c) : client(c) {
    try {
        client.connectToServer();
    } catch (char* msg) {
        cout << msg;
    }
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
    //in case both players dont have any more moves.
    if(v.size() == 1 && v[0].getX() == -1 && v[0].getY() == -1) {
        Point p(-1,-1);
        client.sendMove(p);
        return p;
    }
    //if its the client's turn he plays a move and sends it to server.
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
        //if its not the client's turn gets a waiting message from server and then
        // gets a move from server.
    else {
        cout << client.getMessage();
        Point p(client.getMove());
        myTurn = true;
        return p;
    }
}