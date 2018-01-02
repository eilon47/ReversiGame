//
// Created by elon on 25/12/17.
//

#ifndef REVERSIGAME_GAMESLISTCOMMAND_H
#define REVERSIGAME_GAMESLISTCOMMAND_H

#include "Command.h"
class GamesListCommand : public Command {
 public:
  void execute(vector<string> *args);
 private:
  int numOfAvGames();
};

#endif //REVERSIGAME_GAMESLISTCOMMAND_H
