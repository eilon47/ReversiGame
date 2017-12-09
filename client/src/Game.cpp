/*
* Class for Game.
* Game is in charge of the game flow.
*/
#include "Sign.h"
#include "Game.h"
#include "AIPlayer.h"
#include "NetworkPlayer.h"
#include "NetworkReadPlayer.h"

//Constructors.
Game::Game(Board &b, Player &p1, Player &p2, Rules &rules, Display &display,GAME_T type)
    : b(&b), p1(&p1), p2(&p2),turn(true), rules(&rules), display(&display), type(type){
  if(type != PvsRP) {
    //if player is not initialized with sign.
    if (p1.getSign() == EMPTY && p2.getSign() != XSIGN) {
      p1.setSign(XSIGN);
    } else {
      p1.setSign(OSIGN);
    }
    if (p2.getSign() == EMPTY && p1.getSign() != OSIGN) {
      p2.setSign(OSIGN);
    } else {
      p2.setSign(XSIGN);
    }
  }
}
Game::Game(Board &b, Player &p1, Player &p2, Rules &rules,GAME_T type):
    b(&b), p1(&p1), p2(&p2), turn(true), rules(&rules), type(type){
  this->display = NULL;
  if(type != PvsRP) {
    //if player is not initialized with sign.
    if (p1.getSign() == EMPTY && p2.getSign() != XSIGN) {
      p1.setSign(XSIGN);
    } else {
      p1.setSign(OSIGN);
    }
    if (p2.getSign() == EMPTY && p1.getSign() != OSIGN) {
      p2.setSign(OSIGN);
    } else {
      p2.setSign(XSIGN);
    }
  }
}

//Game::Game(Board &b, Player &p1, Rules &rules, Display &display, GAME_T type):
//  b(&b), p1(&p1), rules(&rules), type(type), display(&display) {
//  if (p1.getSign() == XSIGN) {
//    p2 = new HumanPlayer();
//    p2->setSign(OSIGN);
//    *this->display = display;
//    turn = true;
//  } else {
//    p2 = new HumanPlayer();
//    p2->setSign(XSIGN);
//    *this->display = display;
//    turn = false;
//  }
//}



Game::Game(const Game &p) {
  this->b = p.b;
  this->p1 = p.p1;
  this->p2 = p.p2;
  this->turn = p.turn;
  this->rules = p.rules;
  this->display = p.display;
  this->type = p.type;
}

//Checks for possible moves.
vector<Point> Game::checkAllMoves(SIGN sign) {
  int i, j;
  vector<Point> vRet;
  //char player = this->currentPlayer()->getSign();
  for(i = 1; i < this->b->getSize(); i++) {
    for(j =1 ; j < this->b->getSize(); j++) {
      if(this->b->getBoard()[i][j].getSign() == EMPTY) {

        Point p(i, j);
        if (rules->checkPoint(*this->b, p, sign)) {
          vRet.push_back(p);
        }
      }
    }
  }
  if (vRet.empty()) {
    Point p1(0,0);
    vRet.push_back(p1);
  }
  return vRet;
}
//Put next move and returns the score.
int Game::playOneTurn(Point &p, SIGN sign) {
  int row = p.getX();
  int col = p.getY();
  int score = 0;
  //char player = this->currentPlayer()->getSign();
  this->b->addToBoard(sign, row, col);
  //south east
  score += this->b->flip(p, sign, 1, 1);
  //south west
  score += this->b->flip(p, sign, 1, -1);
  //south
  score += this->b->flip(p, sign, 1, 0);
  //north east
  score += this->b->flip(p, sign, -1, 1);
  //north west
  score += this->b->flip(p, sign, -1, -1);
  //north
  score += this->b->flip(p, sign, -1, 0);
  //west
  score += this->b->flip(p, sign, 0, -1);
  //east
  score += this->b->flip(p, sign, 0, 1);
  return score;

}
//Checks if vector has a point.
bool Game::checkVecHasPoint(vector<Point> &v, Point &p) {
  if (v.empty()){
    return false;
  }
  for(int i = 0; i < v.size(); i++) {
    if(v[i] == (p)) {
      return true;
    }
  }
  return false;
}
//Returns current opponent.
Player* Game::currentOpp() const {
  if(turn) {
    return p2;
  }
  return p1;
}
//Return current player.
Player* Game::currentPlayer() const {
  if(turn) {
    return p1;
  }
  return p2;
}
//Run game.
void Game::run() {
  if(this->type != PvsRP) {
    display->showBoard(*b);
    bool oneMove = false;
    int score;
    while (this->b->hasSpaceOnBoard()) {
      display->showTurn(*this->currentPlayer());
      vector<Point> vMoves = this->checkAllMoves(currentPlayer()->getSign());
      if (!vMoves.empty() && vMoves.size() == 1 && vMoves[0].getX() == 0 && vMoves[0].getY() == 0) {
        //2 turns in a row without moves.
        if (oneMove) {
          vMoves[0].setPoint(-1, -1);
          this->currentPlayer()->getPointFromPlayer(*b, vMoves);
          this->endGame();
          return;
        }
        oneMove = true;
        turn = !turn;
        display->showMessage("No possible moves. Game passes back to the other player.\n");
        continue;
      }
      oneMove = false;
      sort(vMoves.begin(), vMoves.end());

      if (type == PvsP || (type == PvsAI && turn)) {
        this->display->showPossibleMoves(vMoves);
        display->showMessage("Please enter your move: row col\n");
      }
      Point p = this->currentPlayer()->getPointFromPlayer(*b, vMoves);
      if (!this->checkVecHasPoint(vMoves, p) || p.getX() == 0 || p.getY() == 0) {
        display->showMessage("You can not do that move.\n");
        continue;
      }
      score = this->playOneTurn(p, currentPlayer()->getSign());
      display->showBoard(*this->b);
      this->setScoresAfterMove(score);
      display->showScore(*this->p1, *this->p2);
      turn = !turn;
    }
    this->endGame();
  }else {
    this->netRun();
  }
}
//Updates players scores.
void Game::setScoresAfterMove(int num) {
  if(turn) {
    this->p1->addSoldiers(num + 1);
    this->p2->addSoldiers(-num);
  } else {
    this->p2->addSoldiers(num + 1);
    this->p1->addSoldiers(-num);
  }
}
//End game screen.
void Game::endGame() {
  this->display->showEndGame(*this->p1, *this->p2);
}

Game& Game::operator=(const Game &p) {
  this->b = p.b;
  this->p1 = p.p1;
  this->p2 = p.p2;
  this->rules = p.rules;
  this->turn = p.turn;
  this->display = p.display;
}
void Game::netRun() {
  if(this->currentPlayer()->getSign() == OSIGN) {
    turn = !turn;
  }
  display->showBoard(*b);
  bool oneMove = false;
  int score;
  while (this->b->hasSpaceOnBoard()) {
    display->showTurn(*this->currentPlayer());
    vector<Point> vMoves = this->checkAllMoves(currentPlayer()->getSign());
    if (!vMoves.empty() && vMoves.size() == 1 && vMoves[0].getX() == 0 && vMoves[0].getY() == 0) {
      //2 turns in a row without moves.
      if (oneMove) {
        vMoves[0].setPoint(-1, -1);
        this->currentPlayer()->getPointFromPlayer(*b, vMoves);
        this->endGame();
        return;
      }
      oneMove = true;
      turn = !turn;
      display->showMessage("No possible moves. Game passes back to the other player.\n");
      continue;
    }
    oneMove = false;
    sort(vMoves.begin(), vMoves.end());
    if (turn) {
      this->display->showPossibleMoves(vMoves);
      display->showMessage("Please enter your move: row col\n");
    }
    Point p = this->currentPlayer()->getPointFromPlayer(*b, vMoves);
    if ((p.getX() == 0 || p.getY() == 0) && turn) {
      display->showMessage("You can not do that move, please choose another move.\n");
      continue;
    }
    if ((p.getX() == 0 || p.getY() == 0) && !turn) {
      display->showMessage("The other player choose bad move - he tries again.");
      continue;
    }
    score = this->playOneTurn(p, currentPlayer()->getSign());
    display->showBoard(*this->b);
    this->setScoresAfterMove(score);
    display->showScore(*this->p1, *this->p2);
    turn = !turn;
  }
  this->endGame();
}