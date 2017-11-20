//
// Created by Eilon Bashari.
// Class for Play.
// Play is in charge of the game flow.
//

#ifndef EX2_PLAY_H
#define EX2_PLAY_H

#include <iostream>
#include <algorithm>
#include <vector>
#include "Board.h"
#include "ConsolePlayer.h"

using namespace std;
class Play {
 private:
  Board *b;
  Player *p1;
  Player *p2;
  bool turn;
 public:
  /**
   * Constructor.
   * @param b Board.
   * @param p1 Player 1.
   * @param p2 Player 2.
   */
  Play(Board &b, Player &p1, Player &p2);
  /**
   * Copy constructor.
   * @param p another Play.
   */
  Play(const Play &p);
  /**
   * checkAllMoves.
   * Checks all the next moves the player can do.
   * @return list of the possible moves.
   */
  vector<Point> checkAllMoves();
  /**
   * playOneTurn.
   * After the player chose his next move - he can put it there.
   * @param p point that was chosen by player.
   * @return number of flipped soldiers.
   */
  int playOneTurn(Point &p);
  /**
   * checkVecHasPoint.
   * checks if the wanted point by user is valid.
   * @param v vecotr of points.
   * @param p point that the user chose.
   * @return boolean.
   */
  bool checkVecHasPoint(vector<Point> &v, Point &p);
  /**
   * currentPlayer.
   * @return the player which it is his turn.
   */
  Player* currentPlayer() const ;
  /**
   * currentOpp.
   * @return opp player.
   */
  Player* currentOpp() const ;
  /**
   * run.
   * runs the game.
   */
  void run();
  /**
   * setScoreAfterMove.
   * updates the number of soldiers in each player.
   * @param num score.
   */
  void setScoresAfterMove(int num);
  /**
   * endGame.
   * screen for end game.
   */
  void endGame();
  /**
   * addVectorToOther.
   * combines vectors.
   * @param v1 v1.
   * @param v2 v2.
   */
  void addVectorToOther(vector<Point> &v1, vector<Point> &v2);

};

#endif //EX2_PLAY_H
