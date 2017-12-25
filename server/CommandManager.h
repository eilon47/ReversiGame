//
// Created by elon on 25/12/17.
//

#ifndef REVERSIGAME_COMMANDMANAGER_H
#define REVERSIGAME_COMMANDMANAGER_H

#include <map>
#include "Command.h"
class CommandsManager {
 public:
  CommandsManager(Server &server);
  ~CommandsManager();
  void executeCommand(string command, vector<string> args);
 private:
  map<string, Command *> commandsMap;
};

#endif //REVERSIGAME_COMMANDMANAGER_H
