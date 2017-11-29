//
// Created by Eilon Bashari.
// Class for Player.
// Player has sign, knows how many soldiers it has on board
// and can choose a location for next move.
//


#ifndef EX2_PLAYER_H
#define EX2_PLAYER_H

#include "Point.h"
#include "Board.h"
#include "Sign.h"
#include <vector>
using namespace std;
class Player {
 private:
  SIGN sign;
  int numOfSoldiers;
 public:
  /**
  * Copy constructor.
  * @param p another player.
  */
  Player(const Player &p);
  /**
  * Default constructor.
  */
  Player();
  /**
  * getSign.
  * @return player's sign.
  */
  SIGN getSign () const;
  /**
  * getSoldiers.
  * @return number of soldiers.
  */
  int getSoldiers() const ;
  /**
  * setSign.
  * changes the sign of the player.
  * @param c sign
  */
  void setSign(SIGN s);
  /**
  * addSoldiers.
  * updates the number of soldier player has on board.
  * @param num number to add/sub.
  */
  void addSoldiers(int num);
  /**
   * Pure virtual function to get the next move from player.
   * @param p point to change.
   * @param v vector of possible points.
   */
  virtual Point getPointFromPlayer(Board b, vector<Point> v) = 0;
  /**
  * operator ==.
  * @param p const Player.
  * @return boolean.
  */
  bool operator ==(const Player &p) const;
  };
#endif //EX2_PLAYER_H