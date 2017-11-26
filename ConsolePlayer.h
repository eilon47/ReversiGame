//
// Created by Eilon Bashari.
// Class for console player . inheritor from class Player.
//

#ifndef EX2_CONSOLEPLAYER_H
#define EX2_CONSOLEPLAYER_H
#include <iostream>
#include "Player.h"
class ConsolePlayer: public Player {
 public:
  /**
   * Constructor.
   * @param sign sign.
   */
  explicit ConsolePlayer(char sign);
  /**
   * Default Constructor.
   */
  ConsolePlayer();
  /**
   * Copy constructor.
   * @param cp
   */
  ConsolePlayer(const ConsolePlayer &cp);
  /**
   * getPointFromPlayer.
   * Ask the player to enter a point for the next move.
   * @param p point to change.
   * @param v vector of possible moves.
   */
  virtual Point getPointFromPlayer(Board b, vector<Point> v);
private:
    char sign;
    int numOfSoldiers;
};

#endif //EX2_CONSOLEPLAYER_H
