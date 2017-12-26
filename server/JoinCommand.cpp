//
// Created by elon on 25/12/17.
//

#include "JoinCommand.h"


JoinCommand::JoinCommand(Server &server): Command(server) {
    this->server = &server;
}void JoinCommand::execute(vector<string> args) {
    //vector<WaitingGame> v = server->getWaitingGames();

}