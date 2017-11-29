/*
* Created by Eilon Bashari and Daniel Greenspan.
* Class for Game.
* Game is in charge of the game flow.
*/

#ifndef EX2_PLAY_H
#define EX2_PLAY_H

#include <iostream>
#include <algorithm>
#include <vector>
#include "Board.h"
#include "ConsolePlayer.h"
#include "Rules.h"

using namespace std;
class Game {
 private:
  Board *b;
  Player *p1;
  Player *p2;
  Rules *rules;
  bool turn;
 public:
  /**
   * Constructor.
   * @param b Board.
   * @param p1 Player 1.
   * @param p2 Player 2.
   */
  Game(Board &b, Player &p1, Player &p2, Rules &rules);
  /**
   * Copy constructor.
   * @param p another Play.
   */
  Game(const Game &p);
  /**
   * checkAllMoves.
   * Checks all the next moves the player can do.
   * @return list of the possible moves.
   */
  vector<Point> checkAllMoves(SIGN sign);
  /**
   * playOneTurn.
   * After the player chose his next move - he can put it there.
   * @param p point that was chosen by player.
   * @return number of flipped soldiers.
   */
  int playOneTurn(Point &p, SIGN sign);
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
  /**
   * Assignment opertaor =.
   * @param p another game
   * @return game, after shallow copy.
   */
  Game&operator = (const Game &p);
};

#endif //EX2_PLAY_H
