//
// Created by elon on 25/12/17.
//

#include "GamesListCommand.h"
void GamesListCommand::execute(vector<string> args) {

}
GamesListCommand::GamesListCommand(Server &server): Command(server) {
  this->server = &server;
  this->waitingGames = new vector<WaitingGame>();
}
GamesListCommand::~GamesListCommand() {
  delete waitingGames;
}
void GamesListCommand::addGame(WaitingGame &waitingGame) {
  this->waitingGames->push_back(waitingGame);
}