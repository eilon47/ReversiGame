//
// Created by elon on 25/12/17.
//

#ifndef REVERSIGAME_GAMECOMMAND_H
#define REVERSIGAME_GAMECOMMAND_H

#include "Command.h"
class StartCommand : public Command {
 public:
  StartCommand(Server &server);
  void execute(vector<string> args,GamesList &gl);
 private:
  Server *server;
};

#endif //REVERSIGAME_GAMECOMMAND_H
