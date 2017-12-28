#include "Server.h"
#include "ClientManager.h"
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <fstream>
#include <sstream>
#include <csignal>
#include <pthread.h>
#include <complex>
#include <cstdlib>

using namespace std;
#define MAX_CONNECTED_CLIENTS 10
#define CLASS_PATH "../exe/ServerSettings.txt"

Server::Server(int port): port(port), serverSocket(0), cm(new ClientManager) {}

Server::Server(): serverSocket(0), port(getPortFromFile(CLASS_PATH)), cm(new ClientManager) {}

Server::~Server() {
  delete  cm;
}

void* Server::closeInput(void *input) {
  string s;
  while(true){
    cin >> s;
    if(s == "exit"){
      break;
    }
  }
  this->stop();
}

void Server::start() {
  pthread_t tClose;
  int rc = pthread_create(&tClose, NULL, closeInput, NULL);
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
  struct sockaddr_in clientAddress;
  socklen_t clientAddressLen;
  while (true) {
    cout << "Waiting for client connections..." << endl;
    // Accept a new client connection
    int clientSocket = accept(serverSocket, (struct
        sockaddr *) &clientAddress, &clientAddressLen);
    cout << "Client connected" << endl;
    if (clientSocket == -1) {
      throw "Error on accept";
    }
    this->cm->handleClient(clientSocket);
  }
}

void Server::stop() {
  this->cm->closeAllThreads();
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