//
// Created by dandan on 26/12/17.
//

#include <iostream>
#include <string>
#include <csignal>
#include <string.h>
#include <sstream>
#include "ClientManager.h"

ClientManager::ClientManager() {
    this->cm = new CommandsManager();
}
ClientManager::~ClientManager(){
  delete this->cm;
}
void ClientManager::handleClient(int clientId) {
    int clientSocket = (int) clientId;
    signal(SIGPIPE, SIG_IGN);
    char message[255];
    bzero((char*)message,sizeof(message));
    ssize_t n = read(clientSocket, &message, sizeof(message));
    if (n == -1) {
        cout << "Error reading point" << endl;
        return;
    }
    stringstream clientString;
    clientString << clientSocket;
    vector<string> args = this->getArgs(message);
    string command = args[0];
    args[0] = clientString.str();
    this->cm->executeCommand(command, args);
}

bool ClientManager::checkConnection(ssize_t n) {
    if (n == 0) {
        cout << "Player disconnected" << endl;
        return false;
    }
    return true;
}
vector<string> ClientManager::getArgs(char *msg) {
    string arg;
    arg = strtok(msg ," ");
    vector<string> ret;
    ret.insert(ret.end(), arg);
    while(arg != NULL){
        arg = strtok(msg ," ");
        ret.insert(ret.end(), arg);
    }
    return ret;
}
