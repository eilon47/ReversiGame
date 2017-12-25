//
// Created by elon on 25/12/17.
//

#include "CommandManager.h"
#include "StartCommand.h"
#include "CloseCommand.h"
#include "JoinCommand.h"
#include "GamesListCommand.h"
#include "PlayCommand.h"
CommandsManager::CommandsManager(Server &server) {
  commandsMap["start"] = new StartCommand(server);
  commandsMap["close"] = new CloseCommand(server);
  commandsMap["join"] = new JoinCommand(server);
  commandsMap["list"] = new GamesListCommand(server);
  commandsMap["play"] = new PlayCommand(server);
}
void CommandsManager::executeCommand(string command, vector<string> args) {
  Command *commandObj = commandsMap[command];
  commandObj->execute(args);
}
CommandsManager::~CommandsManager() {
  map<string, Command *>::iterator it;
  for (it = commandsMap.begin(); it !=
      commandsMap.end(); it++) {
    delete it->second;
  }
}