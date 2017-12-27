//
// Created by elon on 25/12/17.
//

#ifndef REVERSIGAME_GAMESLISTCOMMAND_H
#define REVERSIGAME_GAMESLISTCOMMAND_H

#include "Command.h"
class GamesListCommand : public Command {
 public:
  GamesListCommand();
  void execute(vector<string> args);
 private:
  Server *server;
};

#endif //REVERSIGAME_GAMESLISTCOMMAND_H
