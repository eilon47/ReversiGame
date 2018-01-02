//
// Created by elon on 25/12/17.
//
#include <vector>
#include <string>
#include <unistd.h>
#ifndef REVERSIGAME_COMMAND_H
#define REVERSIGAME_COMMAND_H
using namespace std;
class Command {
 public:
  Command();
  virtual void execute(vector<string> *args, int clientSocket) = 0;
  virtual ~Command();
};

#endif //REVERSIGAME_COMMAND_H
