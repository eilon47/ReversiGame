//
// Created by elon on 25/12/17.
//

#include "JoinCommand.h"


JoinCommand::JoinCommand(Server &server): Command(server) {
    this->server = &server;
}
void JoinCommand::execute(vector<string> args) {
    //vector<GameInfo> v = server->getWaitingGames();

}
void JoinCommand::runGame(int clientSocket1, int clientSocket2) {

}