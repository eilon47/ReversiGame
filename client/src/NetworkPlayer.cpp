//
// Created by dandan on 05/12/17.
//

#include "NetworkPlayer.h"

NetworkPlayer::NetworkPlayer(Client &c) : client(&c), numOfSoldiers(2) {
    try {
        client->connectToServer();
    } catch (char* msg) {
        cout << msg;
    }
    if (client->getClientSign() == 1) {
        this->setSign(XSIGN);
        this->sign = XSIGN;
    }
    else if (client->getClientSign() == 2) {
        this->setSign(OSIGN);
        this->sign = OSIGN;
    }
}
NetworkPlayer::NetworkPlayer(const NetworkPlayer &cp) {
    this->client = cp.client;
  this->setSign(cp.sign);
    this->numOfSoldiers = cp.numOfSoldiers;
    this->sign = cp.sign;

}

  Point NetworkPlayer::getPointFromPlayer(Board b, vector<Point> v) {
    //in case both players dont have any more moves.
    if(v.size() == 1 && v[0].getX() == -1 && v[0].getY() == -1) {
        Point p(-1,-1);
        client->sendMove(p);
        return p;
    }
    //if its the client's turn he plays a move and sends it to server.

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
      //cout << p.toString() << endl;
      client->sendMove(p);
    return p;
}
