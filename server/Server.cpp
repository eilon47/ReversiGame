#include "Server.h"
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX_CONNECTED_CLIENTS 2
Server::Server(int port): port(port), serverSocket(0) {}
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
    int clientSocket2 = accept(serverSocket, (struct
            sockaddr *)&clientAddress2, &client2AddressLen);
    cout << "Second client connected" << endl;
    if (clientSocket2 == -1)
      throw "Error on accept";
    setPlayer(clientSocket2,2);
    handleClients(clientSocket, clientSocket2);
    // Close communication with the client
    close(clientSocket);
    close(clientSocket2);
  }
}
// Handle requests from a specific client
void Server::handleClients(int clientSocket, int clientSocket2) {
  messageToClient(clientSocket, "Let's Go!");
  string point;
  bool turn = true;
  while (true) {
    if(turn){
      handleWaitingClient(clientSocket2);
      handlePlayingClient(clientSocket, point);
      if(endGame(point)) {
        break;
      }
      movePoint(clientSocket2, point);
      turn = !turn;
    } else {
      handleWaitingClient(clientSocket);
      handlePlayingClient(clientSocket2, point);
      if(endGame(point)) {
        break;
      }
      movePoint(clientSocket, point);
      turn = !turn;
    }
  }
}
void Server::handlePlayingClient(int clientSocket, string &p) {
  int n = read(clientSocket, &p, sizeof(&p));
  if (n == -1) {
    cout << "Error reading board" << endl;
    return;
  }
}
void Server::handleWaitingClient(int clientSocket) {
  string waitMessage = "Waiting for the other player's move...";
  int n = write(clientSocket, &waitMessage, sizeof(waitMessage));
  if (n == -1) {
    cout << "Error writing board to socket" << endl;
    return;
  }
}
void Server::setPlayer(int clientSocket, int numTurn) {
  int n = write(clientSocket, &numTurn, sizeof(numTurn));
  if (n == -1) {
    cout << "Error writing board to socket" << endl;
    return;

  }
}
  void Server::movePoint(int clientSocket, string &p) {
    int n = write(clientSocket, &p, sizeof(p));
    if (n == -1) {
      cout << "Error writing point to other player" << endl;
      return;
    }
  }
  void Server::messageToClient(int clientSocket, string m) {
    int n = write(clientSocket, &m, sizeof(m));
    if (n == -1) {
      cout << "Error writing message to client" << endl;
      return;
    }
  }
  bool Server::endGame(string point) {
    if (strcmp(point.c_str(), "(-1, -1)") == 0) {
      return true;
    }
    return false;
  }
