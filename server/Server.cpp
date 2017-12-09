#include "Server.h"
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <fstream>
#include <sstream>

using namespace std;
#define MAX_CONNECTED_CLIENTS 2
#define CLASS_PATH "../info.txt"

Server::Server(int port): port(port), serverSocket(0) {
  this->message = "";
}

Server::Server(): serverSocket(0), port(getPortFromFile(CLASS_PATH)) {
  this->message = "";
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
  // Start listening to incoming connections
  listen(serverSocket, MAX_CONNECTED_CLIENTS);
  // Define the client socket's structures
  struct sockaddr_in clientAddress;
  struct sockaddr_in clientAddress2;
  socklen_t clientAddressLen;
  socklen_t client2AddressLen;
  while (true) {
    cout << "Waiting for client connections..." << endl;
    // Accept a new client connection
    int clientSocket = accept(serverSocket, (struct
            sockaddr *)&clientAddress, &clientAddressLen);
    cout << "First client connected" << endl;
    //messageToClient(clientSocket, "Waiting for other player to join...");
    if (clientSocket == -1)
      throw "Error on accept";
    setPlayer(clientSocket,1);
      //messageToClient(clientSocket, "you are connected!");
    int clientSocket2 = accept(serverSocket, (struct
            sockaddr *)&clientAddress2, &client2AddressLen);
    cout << "Second client connected" << endl;
    if (clientSocket2 == -1)
      throw "Error on accept";
    setPlayer(clientSocket2,2);
      messageToClient(clientSocket, "ready.");
      messageToClient(clientSocket2, "ready.");

      handleClients(clientSocket, clientSocket2);
    // Close communication with the client
    close(clientSocket);
    close(clientSocket2);
  }
}
// Handle requests from a specific client
void Server::handleClients(int clientSocket, int clientSocket2) {
  //messageToClient(clientSocket, "Let's Go!");
  bool turn = true;
  while (true) {
    if(turn){
      //messageToClient(clientSocket2,"Waiting for the other player's move...");
      handlePlayingClient(clientSocket);
      cout <<  "X played: " << message << endl;
      if(endGame(message)) {
        break;
      }
      messageToClient(clientSocket2, message);
      if(badMove(message)) {
        continue;
      }
      turn = !turn;
    } else {
      //messageToClient(clientSocket,"Waiting for the other player's move...");
      handlePlayingClient(clientSocket2);
      cout <<  "O played: " << message << endl;
      if(endGame(this->message)) {
        break;
      }
      messageToClient(clientSocket, this->message);
      if(badMove(message)) {
        continue;
      }
      turn = !turn;
    }
  }
}
void Server::handlePlayingClient(int clientSocket) {
  int size = 0;
  int n = read(clientSocket, &size, sizeof(&size));
  if (n == -1) {
    cout << "Error reading board" << endl;
    return;
  }
  char point[size + 1];
    bzero((char*)point,sizeof(point));
  n = read(clientSocket, &point, sizeof(point));
  if (n == -1) {
    cout << "Error reading board" << endl;
    return;
  }
  message = point;
}
void Server::setPlayer(int clientSocket, int numTurn) {

  ssize_t n = write(clientSocket, &numTurn, sizeof(numTurn));
  if (n == -1) {
    cout << "Error writing board to socket" << endl;
    return;

  }
}
  void Server::messageToClient(int clientSocket, string m) {
    int size =(int) m.size();
    char point[size];
    strcpy(point, m.c_str());
    int n = write(clientSocket, &size, sizeof(size));
    if(n == -1){
      cout << "Error writing message to client" << endl;
              return;
    }
    n = write(clientSocket, &point, sizeof(point));
    if(n == -1){
      cout << "Error writing message to client" << endl;
      return;
    }
  }
bool Server::endGame(string point) {
  if (strstr(point.c_str(), "(-1,-1)") != NULL) {
    return true;
  }
  return false;
}
bool Server::badMove(string point) {
  if (strstr(point.c_str(), "(0,0)") != NULL) {
    return true;
  }
  return false;
}
int Server::getPortFromFile(string path) {
  int port = 0;
  ifstream file;
  file.open(path);
  if (!file.is_open()) {
    throw "Couldn't open information file.";
  }
  string line;
  getline(file,line);
  istringstream iss(line);
  iss >> port;
  return port;
}
