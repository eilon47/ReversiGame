//
// Created by elon on 25/12/17.
//

#ifndef REVERSIGAME_GAMESLISTCOMMAND_H
#define REVERSIGAME_GAMESLISTCOMMAND_H

#include "Command.h"
class GamesListCommand : public Command {
 public:
  GamesListCommand(Server &server);
  void execute(vector<string> args);
  void addGame(WaitingGame &waitingGame);
  ~GamesListCommand();
 private:
  Server *server;
  vector<WaitingGame> *waitingGames;
};

#endif //REVERSIGAME_GAMESLISTCOMMAND_H
