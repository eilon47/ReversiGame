//
// Created by elon on 25/12/17.
//

#include "PlayCommand.h"
PlayCommand::PlayCommand(Server &server) : Command(server) {
  this->server = &server;
}