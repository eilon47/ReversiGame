//
// Created by elon on 25/12/17.
//

#include "CommandManager.h"
CommandsManager::CommandsManager() {
  commandsMap["start"] = new StartCommand();
  commandsMap["close"] = new CloseCommand();
  commandsMap["join"] = new JoinCommand();
  commandsMap["list"] = new GamesListCommand();

}
void CommandsManager::executeCommand(string command, vector<string> args) {
  Command *commandObj = commandsMap[command];
  commandObj->execute(&args);
}
CommandsManager::~CommandsManager() {
  map<string, Command *>::iterator it;
  for (it = commandsMap.begin(); it != commandsMap.end(); it++) {
    delete it->second;
  }
}