//
// Created by elon on 25/12/17.
//

#include <csignal>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include "GamesListCommand.h"
#include "GamesList.h"


void GamesListCommand::execute(vector<string> *args) {
  int clientSocket = atoi(args->at(0).c_str());
  //Write to client size of list
  //Write to client size of string and string.
  GamesList *gl = GamesList::getInstance();
  int size = gl->getSizeOfList();
  //sends the size of the list.
  ssize_t n = write(clientSocket, &size, sizeof(size));
  if (n == -1) {
    cout << "Error writing message to client" << endl;
    return;
  }
  if(size > 0) {
    for(int i = 0; i < size; i++) {
      GameInfo game = gl->getGame(i);
      string s = game.getName();
      int len =(int) s.size() + 1;
      char name[len];
      strcpy(name, s.c_str());
      n = write(clientSocket, &len, sizeof(len));
      if (n == -1) {
        cout << "Error writing message to client" << endl;
        return;
      }
      n = write(clientSocket, &name, sizeof(name));
      if (n == -1) {
        cout << "Error writing message to client" << endl;
        return;
      }
    }
  }
}
