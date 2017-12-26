/*
 * server header file.
 */


#ifndef SERVER_SERVER_H
#define SERVER_SERVER_H
#include <iostream>
#include <unistd.h>
#include <vector>
using namespace std;

class Server {
public:
    Server(int port);
    Server();
    void start();
    void stop();
  void readFromClient(int clientSocket, int num);
  void readFromClient(int clientSocket, string &msg);
  void writeToClient(int clientSocket, int num);
  void writeToClient(int clientSocket, string &msg);

 private:
    int port;
    int serverSocket; // the socket's file descriptor


};

#endif //SERVER_SERVER_H