//
// Created by dandan on 26/12/17.
//

#ifndef REVERSIGAME_CLIENTMANAGER_H
#define REVERSIGAME_CLIENTMANAGER_H

#include <vector>
#include "CommandManager.h"

using namespace std;

class ClientManager {
public:
    ClientManager();
    void addClient(int socket);
    void handlePlayingClient(int clientSocket);

private:
    vector<string> *gameList;
    CommandsManager *commandsManager;
    bool checkConnection(ssize_t n);
};


#endif //REVERSIGAME_CLIENTMANAGER_H
