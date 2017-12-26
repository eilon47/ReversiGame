//
// Created by elon on 25/12/17.
//

#include <cstdlib>
#include "CloseCommand.h"

CloseCommand::CloseCommand(Server &server): Command(server) {
    this->server = &server;
}

void CloseCommand::execute(vector<string> args, GamesList &gl) {
    int clientSocket = atoi(args[0]);
    int clientSocket2 = 0;
    for(int i = 0; i< gl.getSize(); i++) {
        if (args[1] == gl.getNameAt(i)) {
            clientSocket2 = gl.getSocketIDAt(i);

        }
    }

}
