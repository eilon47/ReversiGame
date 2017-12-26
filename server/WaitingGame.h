//
// Created by elon on 25/12/17.
//
#include <string>
#ifndef REVERSIGAME_WAITINGGAME_H
#define REVERSIGAME_WAITINGGAME_H
using namespace std;
class WaitingGame {
public:
  string clientSocket;
  string name;

  WaitingGame(string clientSocket, string name);
  string getName() const;
  string getClientSocket() const;
};

#endif //REVERSIGAME_WAITINGGAME_H
