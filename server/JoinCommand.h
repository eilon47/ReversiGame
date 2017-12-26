//
// Created by elon on 25/12/17.
//

#ifndef REVERSIGAME_JOINCOMMAND_H
#define REVERSIGAME_JOINCOMMAND_H

#include "Command.h"
class JoinCommand : public Command {
 public:
  JoinCommand(Server &server);
  void execute(vector<string> args, GamesList &gl);
    void handleClients(GameInfo gameInfo);
    void handlePlayingClient(int clientSocket);
    bool checkConnection(ssize_t n);
    bool endGame(string point);
    bool badMove(string point);
    void setPlayer(int clientSocket, int numTurn);
 private:
  Server *server;
    bool connection;
    string *message;
};

#endif //REVERSIGAME_JOINCOMMAND_H
