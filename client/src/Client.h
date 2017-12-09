//
// Created by dandan on 05/12/17.
//

#ifndef REVERSIGAME_CLIENT_H
#define REVERSIGAME_CLIENT_H

#include "string.h"
#include "Point.h"
#include "Sign.h"

class Client {
    public:
        Client(const char *serverIP, int serverPort);
        Client();
        void connectToServer();
        void sendMove(Point point);
        Point getMove();
        int getClientSign();
        string getMessage();
        void getNumTurn();
        void getSettingsFromFile();
    private:
        const char *serverIP;
        int serverPort;
        int clientSocket;
        int turnNum;
    };


#endif //REVERSIGAME_CLIENT_H
