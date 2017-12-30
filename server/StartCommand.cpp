//
// Created by elon on 25/12/17.
//

#include <cstdlib>
#include <iostream>
#include "StartCommand.h"
#include "GameInfo.h"
#include "GamesList.h"

/**
 * args suppose to have the first client socket and the name he waants tog
 * give to the game, then we add that to the server.
 * @param args
 */
void StartCommand::execute(vector<string> *args) {
  GamesList* gamesList = GamesList::getInstance();
  int clientSocket = atoi(args->front().c_str());
  string name = args->back();
  GameInfo gi(clientSocket, name);
  int res = gamesList->addgame(gi);
  //notify user command was made (-1 for error).
  ssize_t n = write(clientSocket, &res, sizeof(res));
  if (n == -1) {
    cout << "Error writing message to client" << endl;
    return;
  }
}