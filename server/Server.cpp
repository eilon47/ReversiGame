#include "Server.h"
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <fstream>
#include <sstream>
#include <csignal>

using namespace std;
#define MAX_CONNECTED_CLIENTS 10
#define CLASS_PATH "../exe/ServerSettings.txt"

Server::Server(int port): port(port), serverSocket(0) {
  this->message = "";
  this->connection = true;
}

Server::Server(): serverSocket(0), port(getPortFromFile(CLASS_PATH)) {
  this->message = "";
  this->connection = true;
}

void Server::start() {
  // Create a socket point
  serverSocket = socket(AF_INET, SOCK_STREAM, 0);
  if (serverSocket == -1) {
    throw "Error opening socket";
  }
  // Assign a local address to the socket
  struct sockaddr_in serverAddress;
  bzero((void *)&serverAddress,
        sizeof(serverAddress));
  serverAddress.sin_family = AF_INET;
  serverAddress.sin_addr.s_addr = INADDR_ANY;
  serverAddress.sin_port = htons(port);
  if (bind(serverSocket, (struct sockaddr
  *)&serverAddress, sizeof(serverAddress)) == -1) {
    throw "Error on binding";
  }
  while(true) {
    // Start listening to incoming connections
    listen(serverSocket, MAX_CONNECTED_CLIENTS);
    // Define the client socket's structures
    struct sockaddr_in clientAddress;
    struct sockaddr_in clientAddress2;
    socklen_t clientAddressLen;
    socklen_t client2AddressLen;
    while (connection) {
      cout << "Waiting for client connections..." << endl;
      // Accept a new client connection
      int clientSocket = accept(serverSocket, (struct
          sockaddr *) &clientAddress, &clientAddressLen);
      cout << "First client connected" << endl;
      //messageToClient(clientSocket, "Waiting for other player to join...");
      if (clientSocket == -1)
        throw "Error on accept";
      setPlayer(clientSocket, 1);
      //messageToClient(clientSocket, "you are connected!");
      int clientSocket2 = accept(serverSocket, (struct
          sockaddr *) &clientAddress2, &client2AddressLen);
      cout << "Second client connected" << endl;
      if (clientSocket2 == -1)
        throw "Error on accept";
      setPlayer(clientSocket2, 2);
      messageToClient(clientSocket, "ready.");
      messageToClient(clientSocket2, "ready.");
      handleClients(clientSocket, clientSocket2);
      // Close communication with the client
      close(clientSocket);
      close(clientSocket2);
    }
    connection = true;
  }
  stop();
}
void Server::stop() {
  close(this->serverSocket);
}

// Handle requests from a specific client
void Server::handleClients(int clientSocket, int clientSocket2) {
  signal(SIGPIPE, SIG_IGN);
  bool turn = true;
  while(connection) {
    if(turn){
      handlePlayingClient(clientSocket);
      if(!connection) {
        messageToClient(clientSocket2, "(-1,-1)");
        return;
      }
      cout <<  "X played: " << message << endl;
      messageToClient(clientSocket2, message);
      if(endGame(message)) {
        connection = false;
        return;
      }
      if(!connection) {
        messageToClient(clientSocket, "(-1,-1)");
        return;
      }
      if(badMove(message)) {
        continue;
      }
      turn = !turn;
    } else {
      handlePlayingClient(clientSocket2);
      if(!connection) {
        messageToClient(clientSocket, "(-1,-1)");
        return;
      }
      cout <<  "O played: " << message << endl;
      messageToClient(clientSocket, this->message);
      if(endGame(this->message)) {
        connection = false;
        return;
      }
      if(!connection) {
        messageToClient(clientSocket2, "(-1,-1)");
        return;
      }
      if(badMove(message)) {
        continue;
      }
      turn = !turn;
    }
  }
}
void Server::handlePlayingClient(int clientSocket) {
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
  char point[size + 1];
    bzero((char*)point,sizeof(point));
  n = read(clientSocket, &point, sizeof(point));
  if (n == -1) {
    cout << "Error reading point" << endl;
    return;
  }
  if(!checkConnection(n)) {
    return;
  }
  message = point;
}
void Server::messageToClient(int clientSocket, string m) {
  signal(SIGPIPE, SIG_IGN);
  int size =(int) m.size();
  char point[size];
  strcpy(point, m.c_str());
  ssize_t n = write(clientSocket, &size, sizeof(size));
    if (n == -1) {
      cout << "Error writing message to client" << endl;
      return;
    }
    n = write(clientSocket, &point, sizeof(point));
    if (n == -1) {
      cout << "Error writing message to client" << endl;
      return;
    }
    if (!checkConnection(n)) {
      return;
    }
}

void Server::setPlayer(int clientSocket, int numTurn) {
  ssize_t n = write(clientSocket, &numTurn, sizeof(numTurn));
  if (n == -1) {
    cout << "Error writing board to socket" << endl;
    return;
  }
  if(!checkConnection(n)) {
    return;
  }
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
bool Server::checkConnection(ssize_t n) {
  if (n == 0) {
    cout << "Player disconnected" << endl;
    connection = false;
  }
  return connection;
}
bool Server::endGame(string point) {
  if (strcmp(point.c_str(), "(-1,-1)") == 0) {
    return true;
  }
  return false;
}
bool Server::badMove(string point) {
  if (strcmp(point.c_str(), "(0,0)") == 0) {
    return true;
  }
  return false;
}