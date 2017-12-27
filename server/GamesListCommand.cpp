//
// Created by elon on 25/12/17.
//

#include <csignal>
#include <cstring>
#include <cstdlib>
#include "GamesListCommand.h"

}
GamesListCommand::GamesListCommand(): Command() { }
void GamesListCommand::execute(vector<string> args) {
  GamesList* gamesList = GamesList::getInstance();
  int clientSocket = atoi(args[0]);
  //Delete the clientSocket
  args.erase(args.begin());
  int sizeOfList = (int) args.size();
  this->server->writeToClient(clientSocket, sizeOfList);
  for(int i = 1; i < sizeOfList; i++) {
    string str = gamesList->getNameAt(i);
    this->server->writeToClient(clientSocket,str);
  }
}
