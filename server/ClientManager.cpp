//
// Created by dandan on 26/12/17.
//

#include <iostream>
#include <string>
#include <zconf.h>
#include <csignal>
#include <string.h>
#include "ClientManager.h"
#include "Server.h"

ClientManager::ClientManager() {
    this->gameList = new vector<string>;


}

void ClientManager::addClient(int socket) {
    gameList->push_back(socket);
}

void ClientManager::handlePlayingClient(int clientSocket) {
    signal(SIGPIPE, SIG_IGN);
    int size = 0;
    ssize_t n = read(clientSocket, &size, sizeof(&size));
    if (n == -1) {
        cout << "Error reading point" << endl;
        return;
    }
    if(!checkConnection(n)) {
        return;
    }
    char message[size + 1];
    bzero((char*)message,sizeof(message));
    n = read(clientSocket, &message, sizeof(message));
    if (n == -1) {
        cout << "Error reading point" << endl;
        return;
    }
    commandsManager->executeCommand(message, *gameList);
}

bool ClientManager::checkConnection(ssize_t n) {
    if (n == 0) {
        cout << "Player disconnected" << endl;
        return false;
    }
    return true;
}
