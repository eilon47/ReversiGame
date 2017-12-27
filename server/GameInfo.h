//
// Created by elon on 25/12/17.
//
#include <string>
#ifndef REVERSIGAME_WAITINGGAME_H
#define REVERSIGAME_WAITINGGAME_H
using namespace std;
class GameInfo {
private:
  int clientSocket1;
  int clientSocket2;
  string name;
  bool available;
public:
    GameInfo(int clientSocket, string name);
  void addClient2(int clientSocket);
  string getName() const;
  int getClientSocket1() const;
  int getClientSocket2() const;
    bool isAvailable();

};

#endif //REVERSIGAME_WAITINGGAME_H
