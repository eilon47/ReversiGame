//
// Created by elon on 25/12/17.
//
#include <vector>
#include <string>
#include "Server.h"
#include "GamesList.h"

#ifndef REVERSIGAME_COMMAND_H
#define REVERSIGAME_COMMAND_H
using namespace std;
class Command {
 public:
  Command();
  virtual void* execute(vector<string> *args) = 0;
  virtual ~Command();
 private:
  Server *server;
};

#endif //REVERSIGAME_COMMAND_H
