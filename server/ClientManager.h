//
// Created by dandan on 26/12/17.
//

#ifndef REVERSIGAME_CLIENTMANAGER_H
#define REVERSIGAME_CLIENTMANAGER_H

#include <vector>
#include "CommandManager.h"
#include "GamesList.h"

using namespace std;

class ClientManager {
public:
    ClientManager(Server &server);
    void* handlePlayingClient(void *clientId);

private:
    GamesList *gl;
    CommandsManager *cm;
    void setListArgs(vector<string> &args);
    bool checkConnection(ssize_t n);
    vector<string> getArgs(char *);
};


#endif //REVERSIGAME_CLIENTMANAGER_H
