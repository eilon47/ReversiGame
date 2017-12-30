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
    static void* handClient_t(void * ci);
    void doCommand(int clientSocket);
    void handleClient(int clientSocket);
    ~ClientManager();
    void closeAllThreads();
private:
    CommandsManager *cm;
    vector<pthread_t> threads;
  bool checkConnection(ssize_t n);
    vector<string> getArgs(char *);
};


#endif //REVERSIGAME_CLIENTMANAGER_H
