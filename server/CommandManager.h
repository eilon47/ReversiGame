//
// Created by elon on 25/12/17.
//

#ifndef REVERSIGAME_COMMANDMANAGER_H
#define REVERSIGAME_COMMANDMANAGER_H

#include <map>
#include "Command.h"
#include "GamesList.h"
#include "StartCommand.h"
#include "JoinCommand.h"
#include "GamesListCommand.h"
class CommandsManager {
 public:
  CommandsManager();
  ~CommandsManager();
  void executeCommand(string &command, vector<string> &args, int clientSocket);
  bool isCommandValid(string command);
 private:
  map<string, Command *> commandsMap;
    bool checkConnection(ssize_t n);
};

#endif //REVERSIGAME_COMMANDMANAGER_H
