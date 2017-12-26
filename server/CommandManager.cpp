//
// Created by elon on 25/12/17.
//

#include "CommandManager.h"
#include "StartCommand.h"
#include "CloseCommand.h"
#include "JoinCommand.h"
#include "GamesListCommand.h"
CommandsManager::CommandsManager(Server &server, GamesList gamesList): gl(&gamesList) {
  commandsMap["start"] = new StartCommand(server);
  commandsMap["close"] = new CloseCommand(server);
  commandsMap["join"] = new JoinCommand(server);
  commandsMap["list"] = new GamesListCommand(server);

}
void CommandsManager::executeCommand(string command, vector<string> args) {
  Command *commandObj = commandsMap[command];
  commandObj->execute(args, *gl);
}
CommandsManager::~CommandsManager() {
  map<string, Command *>::iterator it;
  for (it = commandsMap.begin(); it !=
      commandsMap.end(); it++) {
    delete it->second;
  }
}