//
// Created by elon on 25/12/17.
//

#include <cstdlib>
#include "StartCommand.h"

StartCommand::StartCommand(Server &server): Command(server) {
  this->server = &server;
}

/**
 * args suppose to have the first client socket and the name he waants tog
 * give to the game, then we add that to the server.
 * @param args
 */
void StartCommand::execute(vector<string> args) {
  string clientSocket = args.front();
  string name = args.back();
  WaitingGame wg(clientSocket, name);
  this->server;//Add wg to the server.

}