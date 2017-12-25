//
// Created by elon on 25/12/17.
//

#ifndef REVERSIGAME_CLOSECOMMAND_H
#define REVERSIGAME_CLOSECOMMAND_H

#include "Command.h"
class CloseCommand : public Command{
 public:
  CloseCommand(Server &server);
  void execute(vector<string> args);
 private:
  Server *server;
};

#endif //REVERSIGAME_CLOSECOMMAND_H
