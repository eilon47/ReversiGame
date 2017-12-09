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
    Server();
    void start();
    void stop();
private:
    int port;
    string message;
    int serverSocket; // the socket's file descriptor
    void handleClients(int clientSocket,int clientSocket2);
    void handlePlayingClient(int clientSocket);
    void setPlayer(int clientSocket,int numTurn);
    void messageToClient(int clientSocket, string m);
    bool endGame(string point);
    int getPortFromFile(string path);
};

#endif //SERVER_SERVER_H