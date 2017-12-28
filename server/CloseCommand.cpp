//
// Created by elon on 25/12/17.
//

#include <cstdlib>
#include "CloseCommand.h"
#include "GamesList.h"


void CloseCommand::execute(vector<string> *args) {
    GamesList* gamesList = GamesList::getInstance();
  //Name of game to close;
  int client = atoi(args->at(0).c_str());
  string name = args->at(1);
    for(int i = 0; i< gamesList->getSizeOfList(); i++) {
      GameInfo gi = gamesList->getGame(i);
      if (name == gi.getName()) {
        if(!gi.isGameAvailable()){
            int client2 = gi.getClientSocket2();
            close(client2);
        }
        gamesList->deleteGame(gi);
        close(client);
        return;
      }
    }

}
