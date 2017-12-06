//
// Created by dandan on 05/12/17.
//

#include <sys/socket.h>
#include "Client.h"
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <string.h>
#include <unistd.h>
using namespace std;


Client::Client(const char *serverIP, int serverPort): serverIP(serverIP),
                                                      serverPort(serverPort), clientSocket(0) {
        cout << "Client" << endl;
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
    server = gethostbyaddr((const void *)&address, sizeof
            address, AF_INET);
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

    cout << "Connected to server" << endl;
    if (read(clientSocket,&turnNum, sizeof(int) == -1)) {
        throw "Error in getting sign";
    }
}
void Client::sendMove(Point move) {
    int n = write(clientSocket, &move, sizeof(move));
    if (n == -1) {
        throw "Error writing turn to socket";
    }
}
Point Client::getMove() {
    Point p;
    int n = read(clientSocket, &p, sizeof(p));
    if (n == -1) {
        throw "Error reading turn from socket";
    }
    return p;
}

int Client::getClientSign() { return this->turnNum; }