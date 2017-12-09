//
// Created by elon on 07/12/17.
//

#include "NetworkReadPlayer.h"
NetworkReadPlayer::NetworkReadPlayer(Client &c) : client(&c), numOfSoldiers(2) {
  if (client->getClientSign() == 1) {
    this->setSign(OSIGN);
    this->sign = OSIGN;
  }
  else if (client->getClientSign() == 2) {
    this->setSign(XSIGN);
    this->sign = XSIGN;
  }
}
Point NetworkReadPlayer::getPointFromPlayer(Board b, vector<Point> v) {
//  string s = this->client->getMessage();
//  cout << s << endl;
  cout << "Waiting for the other player's move..." << endl;
  Point p = this->client->getMove();
  Point endP(-1, -1);
  if(!(p == endP)) {
    cout << "The other player played: " << p.toString() << endl << endl;
  }
  return p;
}