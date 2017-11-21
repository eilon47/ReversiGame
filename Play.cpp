//
// Created by Eilon Bashari.
// Class for Play.
// Play is in charge of the game flow.
//

#include "Play.h"
//Constructors.
Play::Play(Board &b, Player &p1, Player &p2, Rules &rules): b(&b), p1(&p1), p2(&p2),
                                              turn(true), rules(&rules){
  //if player is not initialized with sign.
  if(p1.getSign() == ' ' && p2.getSign() != 'X'){
    p1.setSign('X');
  } else {
    p1.setSign('O');
  }
  if(p2.getSign() == ' ' && p1.getSign() != 'O') {
    p2.setSign('O');
  } else {
    p2.setSign('X');
  }
}
Play::Play(const Play &p) {
  this->b = p.b;
  this->p1 = p.p1;
  this->p2 = p.p2;
  this->turn = p.turn;
  this->rules = p.rules;
}
//Checks for possible moves.
vector<Point> Play::checkAllMoves() {
  int i, j;
  vector<Point> vRet;
  char player = this->currentPlayer()->getSign();
  for(i = 1; i < this->b->getSize(); i++) {
    for(j =1 ; j < this->b->getSize(); j++) {
      if(this->b->getBoard()[i][j] == ' ') {
        Point p(i, j);
        if (rules->checkPoint(*this->b, p, player)) {
          vRet.push_back(p);
        }
      }
    }
  }
  sort(vRet.begin(), vRet.end());
  return vRet;
}
//Put next move and returns the score.
int Play::playOneTurn(Point &p) {
  int row = p.getX();
  int col = p.getY();
  int score = 0;
  char player = this->currentPlayer()->getSign();
  this->b->addToBoard(player, row, col);
  //south east
  score += this->b->flip(p, player, 1, 1);
  //south west
  score += this->b->flip(p, player, 1, -1);
  //south
  score += this->b->flip(p, player, 1, 0);
  //north east
  score += this->b->flip(p, player, -1, 1);
  //north west
  score += this->b->flip(p, player, -1, -1);
  //north
  score += this->b->flip(p, player, -1, 0);
  //west
  score += this->b->flip(p, player, 0, -1);
  //east
  score += this->b->flip(p, player, 0, 1);
  return score;

}
//Checks if vecotr has a point.
bool Play::checkVecHasPoint(vector<Point> &v, Point &p) {
  for(int i = 0; i < v.size(); i++) {
    if(v[i] == (p)) {
      return true;
    }
  }
  return false;
}
//Returns current opponent.
Player* Play::currentOpp() const {
  if(turn) {
    return p2;
  }
  return p1;
}
//Return current player.
Player* Play::currentPlayer() const {
  if(turn) {
    return p1;
  }
  return p2;
}
//Run game.
void Play::run() {
  cout << *(this->b);
  bool oneMove = false;
  int score;
  while (this->b->hasSpaceOnBoard()) {
    cout << this->currentPlayer()->getSign() << ": It's your move." << endl;
    vector<Point> vMoves = this->checkAllMoves();
    if (vMoves.empty()) {
      //2 turns in a row without moves.
      if (oneMove) {
        this->endGame();
        return;
      }
      oneMove = true;
      turn = !turn;
      cout << "No possible moves. Play passes back to the other player."
           << endl;
      continue;
    }
    oneMove = false;
    Point p;
    this->currentPlayer()->getPointFromPlayer(*b, p, vMoves);
    if (!this->checkVecHasPoint(vMoves, p)){
      cout << "You can not do that move." << endl;
      continue;
    }
    score = this->playOneTurn(p);
    cout << *(this->b);
    this->setScoresAfterMove(score);
    cout << "Current score: " << p1->getSign() << ": " << p1->getSoldiers()
         << ", " << p2->getSign() << ": " << p2->getSoldiers() << endl;
    turn = !turn;
  }
  this->endGame();
}
//Updates players scores.
void Play::setScoresAfterMove(int num) {
  if(turn) {
    this->p1->addSoldiers(num + 1);
    this->p2->addSoldiers(-num);
  } else {
    this->p2->addSoldiers(num + 1);
    this->p1->addSoldiers(-num);
  }
}
//End game screen.
void Play::endGame() {
  char winner, loser;
  int winScore;
  if (this->p1 == this->p2) {
    cout << "Game ended with a tide." << endl;
    return;
  }
  if (this->p1->getSoldiers() > this->p2->getSoldiers()) {
    winner = this->p1->getSign();
    winScore = this->p1->getSoldiers();
    loser = this->p2->getSign();
  } else {
    winner = this->p2->getSign();
    winScore = this->p2->getSoldiers();
    loser = this->p1->getSign();
  }
  cout << "Winner is: " << winner << " with a score of "
       << winScore << " points! :)" << endl;
  cout << loser << " maybe next time :(" << endl;
}
//Combine vectors.
void Play::addVectorToOther(vector<Point> &v1, vector<Point> &v2){
  for(int i = 0; i < v2.size(); i++) {
    if(!this->checkVecHasPoint(v1, v2[i])) {
      v1.push_back(v2[i]);
    }
  }

}