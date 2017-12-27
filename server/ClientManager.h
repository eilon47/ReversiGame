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
    ClientManager();
    void handleClient(int clientId);
    ~ClientManager();
private:
    CommandsManager *cm;
    bool checkConnection(ssize_t n);
    vector<string> getArgs(char *);
};


#endif //REVERSIGAME_CLIENTMANAGER_H
