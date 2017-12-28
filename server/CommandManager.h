//
// Created by elon on 25/12/17.
//

#ifndef REVERSIGAME_COMMANDMANAGER_H
#define REVERSIGAME_COMMANDMANAGER_H

#include <map>
#include "Command.h"
#include "GamesList.h"

class CommandsManager {
 public:
  CommandsManager();
  ~CommandsManager();
  void executeCommand(string command, vector<string> args);
 private:
  map<string, Command *> commandsMap;
};

#endif //REVERSIGAME_COMMANDMANAGER_H
