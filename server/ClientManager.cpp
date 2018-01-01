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
static void* handClient_t(void * ci);
struct clientInfo {
  ClientManager *cm;
  int cs;
};

ClientManager::ClientManager() {
    this->cm = new CommandsManager();
    this->threads = new vector<pthread_t>;
}
ClientManager::~ClientManager(){
  delete this->cm;
}
void ClientManager::cancelAllThreads() {
  for(int i = 0; i < this->threads->size(); i++){
    pthread_cancel(threads->at(i));
  }
  //GameList close all sockets from game
}
void* handClient_t(void *ci) {
    clientInfo *client = (clientInfo*) ci;
    int clientSocket = client->cs;
    ClientManager *clientManager = client->cm;
    clientManager->doCommand(clientSocket);
}
void ClientManager::doCommand(int clientSocket) {
    signal(SIGPIPE, SIG_IGN);
    while(true) {
      int size = 0;
      ssize_t n = read(clientSocket, &size, sizeof(size));
      if (n == -1) {
        cout << "Error reading point" << endl;
        return;
      }
      char message[size];
      bzero((char *) message, sizeof(message));
      ssize_t n2 = read(clientSocket, &message, sizeof(message));
      cout << message << endl;
      if (n2 == -1) {
        cout << "Error reading point" << endl;
        return;
      }
      stringstream clientString;
      clientString << clientSocket;
      cout << clientString.str() << endl;
      vector<string> args(this->getArgs(message));
      string command = args[0];
      args[0] = clientString.str();
      this->cm->executeCommand(command, args);
      if (command == "start") {
        GamesList *gamesList = GamesList::getInstance();
        if (gamesList->isGameExist(clientSocket)) {
          GameInfo gi = gamesList->getGameBySocket1(clientSocket);
          while (gi.isGameAvailable()) {/*Wait for other player to join.*/}
          break;
        }
      }
    }
}
void ClientManager::handleClient(int clientId) {
    clientInfo *ci;
    ci->cm = this;
    ci->cs = clientId;
    pthread_t thread;
    int rc = pthread_create(&thread, NULL, handClient_t, (void *) ci);
    if (rc) {
        cout << "Error: unable to create thread, " << rc << endl;
        exit(-1);
    }
    this->threads->push_back(thread);
}


vector<string> ClientManager::getArgs(char *msg) {
    char* arg;
    arg = strtok(msg ," ");
    vector<string> ret;
    do {
      string s(arg);
      ret.insert(ret.end(), s);
      arg = strtok(NULL ," \n\0");
    } while(arg != NULL);
    return ret;
}
