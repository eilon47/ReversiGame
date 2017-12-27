//
// Created by elon on 25/12/17.
//

#include <cstdlib>
#include "CloseCommand.h"

CloseCommand::CloseCommand(): Command() {
}

void CloseCommand::execute(vector<string> args) {
    GamesList* gamesList = GamesList::getInstance();
    int clientSocket = atoi(args[0]);
    int clientSocket2 = 0;
    for(int i = 0; i< gamesList->getSize(); i++) {
        if (args[1] == gamesList->getNameAt(i)) {
            clientSocket2 = gamesList->getSocketIDAt(i);

        }
    }

}
