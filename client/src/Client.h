//
// Created by dandan on 05/12/17.
//

#ifndef REVERSIGAME_CLIENT_H
#define REVERSIGAME_CLIENT_H


#include "Point.h"
#include "Sign.h"

class Client {
    public:
        Client(const char *serverIP, int serverPort);
        void connectToServer();
        void sendMove(Point point);
        Point getMove();
        int getClientSign();
    private:
        const char *serverIP;
        int serverPort;
        int clientSocket;
        int turnNum;
    };
};


#endif //REVERSIGAME_CLIENT_H
