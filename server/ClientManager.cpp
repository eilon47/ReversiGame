//
// Created by dandan on 26/12/17.
//

#include <iostream>
#include <string>
#include <csignal>
#include <string.h>
#include <sstream>
#include <cstdlib>
#include "ClientManager.h"

struct clientInfo {
  ClientManager *cm;
  int cs;
};
ClientManager::ClientManager() {
    this->cm = new CommandsManager();
}
ClientManager::~ClientManager(){
  delete this->cm;
}
void ClientManager::closeAllThreads() {
  
}
void* ClientManager::handClient_t(void *ci) {
    clientInfo *client = (clientInfo*) ci;
    int clientSocket = client->cs;
    ClientManager *clientManager = client->cm;
    clientManager->doCommand(clientSocket);
}
void ClientManager::doCommand(int clientSocket) {
    signal(SIGPIPE, SIG_IGN);
    int size = 0;
    ssize_t n = read(clientSocket, &size, sizeof(size));
    if (n == -1) {
        cout << "Error reading point" << endl;
        return;
    }
    char message[size];
    bzero((char*)message,sizeof(message));
    ssize_t n2 = read(clientSocket, &message, sizeof(message));
    cout <<message;
    if (n2 == -1) {
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
void ClientManager::handleClient(int clientId) {
    clientInfo *ci;
    ci->cm = this;
    ci->cs = clientId;
    pthread_t thread;
    int rc = pthread_create(&thread, NULL, handClient_t, (void *) ci);
    if(rc) {
        cout << "Error: unable to create thread, " << rc << endl;
        exit(-1);
    }
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
    do {
      ret.insert(ret.end(), arg);
      arg = strtok(msg ," ");
    } while(arg.c_str() != NULL);
    return ret;
}
