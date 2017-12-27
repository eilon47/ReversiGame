//
// Created by elon on 25/12/17.
//

#ifndef REVERSIGAME_GAMECOMMAND_H
#define REVERSIGAME_GAMECOMMAND_H

#include "Command.h"
class StartCommand : public Command {
 public:
  StartCommand();
  void execute(vector<string> args);
 private:
  Server *server;
};

#endif //REVERSIGAME_GAMECOMMAND_H
