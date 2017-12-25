//
// Created by elon on 25/12/17.
//

#include "WaitingGame.h"
WaitingGame::WaitingGame(string clientSocket, string name) {
  this->clientSocket = clientSocket;
  this->name = name;
}
string WaitingGame::getClientSocket() const {
  return this->clientSocket;
}
string WaitingGame::getName() const {
  return this->name;
}