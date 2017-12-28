//
// Created by dandan on 26/12/17.
//

#ifndef REVERSIGAME_CLIENTMANAGER_H
#define REVERSIGAME_CLIENTMANAGER_H

#include <vector>
#include "CommandManager.h"
#include "GamesList.h"
struct clientInfo {
  ClientManager *cm;
  int cs;
};
using namespace std;

class ClientManager {
public:
    ClientManager();
    void* handClient_t(void * ci);
    void doCommand(int clientSocket);
    void handleClient(int clientSocket);
    ~ClientManager();
    void closeAllThreads();
private:
    CommandsManager *cm;
    bool checkConnection(ssize_t n);
    vector<string> getArgs(char *);
};


#endif //REVERSIGAME_CLIENTMANAGER_H
