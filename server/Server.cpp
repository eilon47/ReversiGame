#include "Server.h"

#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <stdio.h>
#include <fstream>
#include <sstream>
#include <pthread.h>
#include <complex>
#include <cstdlib>

using namespace std;
#define MAX_CONNECTED_CLIENTS 10
#define CLASS_PATH "../exe/ServerSettings.txt"
struct ConnectingArgs {
      ClientManager* clientManager;
    int socketServer;
  };
Server::Server(int port): port(port), serverSocket(0), cm(new ClientManager),
                          threads(new vector<pthread_t>) {}

Server::Server(): serverSocket(0), port(getPortFromFile(CLASS_PATH)), cm(new ClientManager),
                  threads(new vector<pthread_t>) {}

Server::~Server() {
  delete  cm;
}

void* Server::closeInput(void *server) {
  string s;
  Server *server1 = (Server *) server;
  while(true){
    cin >> s;
    if(s == "exit"){
      break;
    }
  }
  server1->stop();
}

void Server::start() {
  pthread_t tClose;
  int rc = pthread_create(&tClose, NULL, closeInput,(void *) this);
  if (rc) {
    cout << "Error: unable to create thread, " << rc << endl;
    exit(-1);
  }
  // Create a socket point
  serverSocket = socket(AF_INET, SOCK_STREAM, 0);
  if (serverSocket == -1) {
    throw "Error opening socket";
  }
  // Assign a local address to the socket
  struct sockaddr_in serverAddress;
  bzero((void *) &serverAddress,
        sizeof(serverAddress));
  serverAddress.sin_family = AF_INET;
  serverAddress.sin_addr.s_addr = INADDR_ANY;
  serverAddress.sin_port = htons(port);
  if (bind(serverSocket, (struct sockaddr
  *) &serverAddress, sizeof(serverAddress)) == -1) {
    throw "Error on binding";
  }
  // Start listening to incoming connections
  listen(serverSocket, MAX_CONNECTED_CLIENTS);
  // Define the client socket's structures

  ConnectingArgs* ca = new ConnectingArgs;
  ca->socketServer = serverSocket;
  ca->clientManager = cm;
  for(int i = 0; i < MAX_CONNECTED_CLIENTS; i++) {
    pthread_t thread;
    int rc = pthread_create(&thread, NULL, openConnectionToOneClient, (void *) ca);
    if(rc){
      cout << "Error: unable to create thread, " << rc << endl;
      exit(-1);
    }
    this->threads->push_back(thread);
  }
  for(int i = 0; i < threads->size(); i++) {
    pthread_join(threads->at(i), NULL);
  }
  delete ca;
}

void Server::stop() {
  this->cm->closeAllThreads();
  for(int i = 0; i < this->threads->size(); i++){
    pthread_cancel(this->threads->at(i));
  }
  close(this->serverSocket);
}

int Server::getPortFromFile(string path) {
  int port = 0;
  ifstream file;
  file.open(path.c_str());
  if (!file.is_open()) {
    throw "Couldn't open information file.";
  }
  string line;
  while (getline(file, line, ':')) {
    if (line == "port") {
      getline(file, line, '\n');
      istringstream iss(line);
      iss >> port;
      break;
    }
  }
  file.close();
  return port;
}

void* Server::openConnectionToOneClient(void *args) {
  ConnectingArgs* ca = (ConnectingArgs *) args;
  struct sockaddr_in clientAddress;
  socklen_t clientAddressLen;
  while (true) {
    cout << "Waiting for client connections..." << endl;
    // Accept a new client connection
    int clientSocket = accept(ca->socketServer, (struct
        sockaddr *) &clientAddress, &clientAddressLen);
    cout << "Client connected" << endl;
    if (clientSocket == -1) {
      throw "Error on accept";
    }
    ca->clientManager->handleClient(clientSocket);
  }
}