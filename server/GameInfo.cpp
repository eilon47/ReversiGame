//
// Created by elon on 25/12/17.
//

#include "GameInfo.h"
GameInfo::GameInfo(int clientSocket, string name) {
  this->clientSocket1 = clientSocket;
  this->clientSocket2 = -1;
  this->name = name;
}
int GameInfo::getClientSocket1() const {
  return this->clientSocket1;
}
string GameInfo::getName() const {
  return this->name;
}
int GameInfo::getClientSocket2() const {
  return this->clientSocket2;
}
void GameInfo::addClient2(int clientSocket) {
  this->clientSocket2 = clientSocket;
}
