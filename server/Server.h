//
// Created by elon on 05/12/17.
//

#ifndef SERVER_SERVER_H
#define SERVER_SERVER_H
#include "Point.h"

class Server {
 public:
  Server(int port);
  void start();
  void stop();
 private:
    Point *p;
  int port;
  int serverSocket; // the socket's file descriptor
  void handleClients(int clientSocket,int clientSocket2);
  void handleWaitingClient(int clientSocket);
  void handlePlayingClient(int clientSocket, Point &p);
  void organizeGame(int clientSocket,int clientSocket2);
  void movePoint(int clientSocket, Point &p);
  void messageToClient(int clientSocket, string m);
};

#endif //SERVER_SERVER_H
