//
// Created by elon on 25/12/17.
//

#include <csignal>
#include <cstring>
#include <cstdlib>
#include "GamesListCommand.h"

}
GamesListCommand::GamesListCommand(Server &server): Command(server) {
  this->server = &server;
}
void GamesListCommand::execute(vector<string> args) {
  int clientSocket = atoi(args[0]);
  //Delete the clientSocket
  args.erase(args.begin());
  int sizeOfList = (int) args.size();
  this->server->writeToClient(clientSocket, sizeOfList);
  for(int i = 0; i < sizeOfList; i++) {
    this->server->writeToClient(clientSocket, args[i]);
  }
}
