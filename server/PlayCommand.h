//
// Created by elon on 25/12/17.
//

#ifndef REVERSIGAME_PLAYCOMMAND_H
#define REVERSIGAME_PLAYCOMMAND_H

#include "Command.h"
class PlayCommand : public Command {
 public:
  PlayCommand(Server &server);
  void execute(vector<string> args);
 private:
  Server *server;
};

#endif //REVERSIGAME_PLAYCOMMAND_H
