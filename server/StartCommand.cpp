//
// Created by elon on 25/12/17.
//

#include <cstdlib>
#include "StartCommand.h"
#include "GameInfo.h"

StartCommand::StartCommand(Server &server): Command(server) {
  this->server = &server;
}

/**
 * args suppose to have the first client socket and the name he waants tog
 * give to the game, then we add that to the server.
 * @param args
 */
void StartCommand::execute(vector<string> args, GamesList &gl) {
  int clientSocket = atoi(args.front());
  string name = args.back();
  GameInfo gi(clientSocket, name);
  gl.addGame(gi);
}