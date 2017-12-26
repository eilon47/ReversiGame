//
// Created by elon on 25/12/17.
//

#ifndef REVERSIGAME_GAMESLISTCOMMAND_H
#define REVERSIGAME_GAMESLISTCOMMAND_H

#include "Command.h"
class GamesListCommand : public Command {
 public:
  GamesListCommand(Server &server);
  void execute(vector<string> args, GamesList &gl);
 private:
  Server *server;
};

#endif //REVERSIGAME_GAMESLISTCOMMAND_H
