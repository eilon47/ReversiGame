//
// Created by elon on 25/12/17.
//

#ifndef REVERSIGAME_JOINCOMMAND_H
#define REVERSIGAME_JOINCOMMAND_H

#include "Command.h"
#include "GameInfo.h"
class JoinCommand : public Command {
 public:
    void execute(vector<string> *args);
    void handleClients(GameInfo gameInfo);
    void handlePlayingClient(int clientSocket, string &message);
    bool checkConnection(ssize_t n);
    bool endGame(string &point);
    bool badMove(string &point);
    void deleteGameFromList(GameInfo &g);
    void setPlayer(int clientSocket, int numTurn);
    ssize_t readFromClient(int clientSocket, int &num);
    ssize_t readFromClient(int clientSocket, string &msg);
    ssize_t writeToClient(int clientSocket, int num);
    ssize_t writeToClient(int clietnSocket, string msg);
 private:
    bool connection;
};

#endif //REVERSIGAME_JOINCOMMAND_H
