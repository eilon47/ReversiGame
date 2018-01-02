//
// Created by elon on 25/12/17.
//

#include <iostream>
#include "CommandManager.h"
CommandsManager::CommandsManager() {
  commandsMap["start"] = new StartCommand();
  commandsMap["join"] = new JoinCommand();
  commandsMap["list_games"] = new GamesListCommand();

}
void CommandsManager::executeCommand(string &command, vector<string> &args, int clientSocket) {
  if(this->isCommandValid(command)) {
    Command *commandObj = commandsMap[command];
    commandObj->execute(&args, clientSocket);
  } else {
    cout << "unknown command" << endl;
    int res = -1;
    ssize_t n = write(clientSocket, &res, sizeof(res));
    if(n == -1){
      cout << "Error reading point" << endl;
      return;
    }
  }
}
CommandsManager::~CommandsManager() {
  map<string, Command *>::iterator it;
  for (it = commandsMap.begin(); it != commandsMap.end(); it++) {
    delete it->second;
  }
}
bool CommandsManager::isCommandValid(string command) {
  map<string, Command*>::iterator it;
  for(it = commandsMap.begin(); it != commandsMap.end(); it++) {
    if(it->first == command){
      return true;
    }
  }
  return false;
}