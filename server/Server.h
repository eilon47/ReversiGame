/*
 * server header file.
 */


#ifndef SERVER_SERVER_H
#define SERVER_SERVER_H
#include <iostream>
#include <unistd.h>
#include <vector>
#include "ClientManager.h"
using namespace std;

class Server {
public:
    Server(int port);
    Server();
  ~Server();
    void start();
    void stop();
 private:
    int port;
    ClientManager *cm;
    pthread_t serverThreadId;
    int serverSocket; // the socket's file descriptor
    int getPortFromFile(string path);

};

#endif //SERVER_SERVER_H