//
// Created by elon on 25/12/17.
//

#ifndef REVERSIGAME_JOINCOMMAND_H
#define REVERSIGAME_JOINCOMMAND_H

#include "Command.h"
class JoinCommand : public Command {
 public:
    JoinCommand();
    void execute(vector<string> args);
    void handleClients(GameInfo gameInfo);
    void handlePlayingClient(int clientSocket);
    bool checkConnection(ssize_t n);
    bool endGame(string point);
    bool badMove(string point);
    void setPlayer(int clientSocket, int numTurn);
    void notifyGameStarts(int clientSocket);
    ssize_t readFromClient(int clientSocket, int &num);
    ssize_t readFromClient(int clientSocket, char *msg);
    ssize_t writeToClient(int clientSocket, int num);
    ssize_t writeToClient(int clietnSocket, string msg);
 private:
    bool connection;
    string *message;
};

#endif //REVERSIGAME_JOINCOMMAND_H
