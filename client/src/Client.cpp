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

using namespace std;
#define CLASS_PATH "../exe/ClientSettings.txt"

Client::Client(const char *serverIP, int serverPort, Display &display):
    serverIP(serverIP), serverPort(serverPort), clientSocket(0),turnNum(0), display(&display) { }
Client::Client(Display &display): clientSocket(0), turnNum(0), display(&display) {
    getSettingsFromFile();
}

void Client::connectToServer() {
    clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket == -1) {
        display->showMessage("Error opening socket\n");
        throw "Error opening socket";
    }
    struct in_addr address;
    if (!inet_aton(serverIP, &address)) {
      display->showMessage("Can't parse IP address\n");
        throw "Can't parse IP address";
    }

    struct hostent *server;
    server = gethostbyaddr((const void *)&address, sizeof address, AF_INET);
    if (server == NULL) {
      display->showMessage("Host is unreachable\n");
        throw "Host is unreachable";
    }

    struct sockaddr_in serverAddress;
    bzero((char *)&address, sizeof(address));
    serverAddress.sin_family = AF_INET;
    memcpy((char *)&serverAddress.sin_addr.s_addr, server->h_addr, server->h_length);

    serverAddress.sin_port = htons(serverPort);

    if (connect(clientSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress)) == -1) {
      display->showMessage("Error connecting to server\n");
        throw "Error connecting to server";
    }
    //connections confirmation.
    display->showMessage("Connected to server\n");
    getNumTurn();
    if(turnNum == 1) {
        display->showMessage("Waiting for other player to join...\n");
    }
    else {
        display->showMessage("you are the second player. We are ready to start the game!\n");
    }
}
void Client::sendMove(Point move) {
  string m = move.toString();
  ssize_t size = (int) m.size();
  char message[size];
  strcpy(message, m.c_str());
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
    ifstream file;
    file.open(CLASS_PATH);
    if (!file.is_open()) {
        throw "Couldn't open information file.";
    }
    string line;
    istringstream iss;
    //gets ip
    while (getline(file, line, ':')) {
        if (line == "server") {
            getline(file, line, '\n');
            char* iP = new char[line.size()];
            std::copy(line.begin(), line.end(), iP);
            this->serverIP = (const char*) iP;
        }
            // gets port.
        else if (line == "port") {
            getline(file, line, '\n');
            istringstream iss(line);
            iss >> this->serverPort;
        }
    }
  file.close();
}

int Client::getClientSign() { return this->turnNum; }