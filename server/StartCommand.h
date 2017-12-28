//
// Created by elon on 25/12/17.
//

#ifndef REVERSIGAME_GAMECOMMAND_H
#define REVERSIGAME_GAMECOMMAND_H

#include "Command.h"
class StartCommand : public Command {
 public:
  void execute(vector<string> *args);
 private:
};

#endif //REVERSIGAME_GAMECOMMAND_H
