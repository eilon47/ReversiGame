//
// Created by elon on 25/12/17.
//

#include "GameInfo.h"
GameInfo::GameInfo(int clientSocket, string name) {
  this->clientSocket1 = clientSocket;
  this->clientSocket2 = -1;
  this->name = name;
  this->available = true;
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
  this->available = false;
}
bool GameInfo::isGameAvailable() {
  return this->available;
}
bool GameInfo::operator==(const GameInfo &gameInfo) const {
  bool a = (this->getName() == gameInfo.getName());
  bool b = (this->getClientSocket1() == gameInfo.getClientSocket1());
  bool c = (this->getClientSocket2() == gameInfo.getClientSocket2());
  return (a && b && c);
}