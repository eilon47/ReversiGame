//
// Created by elon on 25/12/17.
//

#include <cstdlib>
#include "StartCommand.h"
#include "GameInfo.h"

StartCommand::StartCommand(): Command() {
}

/**
 * args suppose to have the first client socket and the name he waants tog
 * give to the game, then we add that to the server.
 * @param args
 */
void StartCommand::execute(vector<string> args) {
  GamesList* gamesList = GamesList::getInstance();
  int clientSocket = atoi(args.front());

  string name = args.back();
  GameInfo gi(clientSocket, name);
  gamesList->addGame(gi);
}