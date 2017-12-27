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
    static void* connecting(void * serverSocket);

 private:
    int port;
    int serverSocket; // the socket's file descriptor
    int getPortFromFile(string path);

};

#endif //SERVER_SERVER_H