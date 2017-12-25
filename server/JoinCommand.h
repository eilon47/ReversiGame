//
// Created by elon on 25/12/17.
//

#ifndef REVERSIGAME_JOINCOMMAND_H
#define REVERSIGAME_JOINCOMMAND_H

#include "Command.h"
class JoinCommand : public Command {
 public:
  JoinCommand(Server &server);
  void execute(vector<string> args);
 private:
  Server *server;
};

#endif //REVERSIGAME_JOINCOMMAND_H
