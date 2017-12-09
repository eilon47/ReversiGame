//
// Created by dandan on 05/12/17.
//

#include <sys/socket.h>
#include "Client.h"
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#include <fstream>
#include <sstream>
#include <stdio.h>

using namespace std;
#define CLASS_PATH "../info.txt"

Client::Client(const char *serverIP, int serverPort):
    serverIP(serverIP), serverPort(serverPort), clientSocket(0),turnNum(0) { }
Client::Client(): clientSocket(0), turnNum(0) {
    getSettingsFromFile();
}

void Client::connectToServer() {
    clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket == -1) {
        throw "Error opening socket";
    }
    struct in_addr address;
    if (!inet_aton(serverIP, &address)) {
        throw "Can't parse IP address";
    }

    struct hostent *server;
    server = gethostbyaddr((const void *)&address, sizeof address, AF_INET);
    if (server == NULL) {
        throw "Host is unreachable";
    }

    struct sockaddr_in serverAddress;
    bzero((char *)&address, sizeof(address));
    serverAddress.sin_family = AF_INET;
    memcpy((char *)&serverAddress.sin_addr.s_addr, server->h_addr, server->h_length);

    serverAddress.sin_port = htons(serverPort);

    if (connect(clientSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress)) == -1) {
        throw "Error connecting to server";
    }
    //connections confirmation.
    cout << "Connected to server" << endl;
    getNumTurn();
    if(turnNum == 1) {
        cout << "Waiting for other player to join..." << endl;
    }
    else {
        cout << "you are the second player. We are ready to start the game!" << endl;
    }
}
void Client::sendMove(Point move) {
  string m = move.toString();
  ssize_t size = (int) m.size();
  char message[size];
  strcpy(message, m.c_str());
    //cout << message << endl;
  ssize_t n = write(clientSocket, &size, sizeof(size));
  if (n == -1) {
      throw "Error writing turn to socket";
  }
  n = write(clientSocket, &message, sizeof(message));
  if (n == -1) {
    throw "Error writing turn to socket";
  }
}
Point Client::getMove() {
    int size;
    int n = read(clientSocket, &size, sizeof(size));
    if (n == -1) {
        throw "Error reading turn from socket";
    }
    char point[size];
    n = read(clientSocket, &point, sizeof(point));
  if (n == -1) {
    throw "Error reading turn from socket";
  }
    Point p1(point);
    return p1;
}

void Client::getNumTurn() {
    int num;
    ssize_t n = read(clientSocket, &num, sizeof(int));
    if (n == -1){
        throw "Error in getting sign";
    }
    this->turnNum = num;
}

string Client::getMessage() {
  int size = 0;
  int n = read(clientSocket, &size, sizeof(size));
  if (n == -1) {
    throw "Error in reading message";
  }
  char c[size];
    bzero((void *)&c, sizeof(c));
  n = read(clientSocket,&c,sizeof(c));
  if (n == -1) {
    throw "Error in reading message";
  }
  string m = c;
  return m;
}

void Client::getSettingsFromFile() {
    int port = 0;
    ifstream file;
    file.open(CLASS_PATH);
    if (!file.is_open()) {
        throw "Couldn't open information file.";
    }
    string line, line2;
    getline(file, line);
    getline(file, line2);
    istringstream iss(line);
    istringstream iss2(line2);
    //gets ip
    char * iP = new char[line.size() + 1];
    std::copy(line.begin(), line.end(), iP);
    iP[line.size()] = '\0';
    this->serverIP = iP;
    //get port.
    iss >> this-> serverPort;
}

int Client::getClientSign() { return this->turnNum; }