//
// Created by elon on 25/12/17.
//

#include <cstdlib>
#include "CloseCommand.h"

CloseCommand::CloseCommand(): Command() {
}

void CloseCommand::execute(vector<string> args) {
    GamesList* gamesList = GamesList::getInstance();
  //Name of game to close;
  int client = atoi(args[0]);
  string name = args[1];
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
