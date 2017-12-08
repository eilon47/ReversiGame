//
// Created by elon on 07/12/17.
//

#ifndef REVERSIGAME_NETWORKREADPLAYER_H
#define REVERSIGAME_NETWORKREADPLAYER_H

#include "Player.h"
#include "Client.h"
class NetworkReadPlayer: public Player {
 public:
  NetworkReadPlayer(Client &c);
  Point getPointFromPlayer(Board b, vector<Point> v);
 private:
  Client *client;
  SIGN sign;
  int numOfSoldiers;
};

#endif //REVERSIGAME_NETWORKREADPLAYER_H
