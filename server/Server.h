//
// Created by elon on 05/12/17.
//

#ifndef SERVER_SERVER_H
#define SERVER_SERVER_H
#include <iostream>
using namespace std;

class Server {
public:
    Server(int port);
    void start();
    void stop();
private:
    int port;
    int serverSocket; // the socket's file descriptor
    void handleClients(int clientSocket,int clientSocket2);
    void handleWaitingClient(int clientSocket);
    void handlePlayingClient(int clientSocket, string &p);
    void setPlayer(int clientSocket,int numTurn);
    void movePoint(int clientSocket, string &p);
    void messageToClient(int clientSocket, string m);
    bool endGame(string point);
};

#endif //SERVER_SERVER_H