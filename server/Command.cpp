//
// Created by elon on 25/12/17.
//
#include "Command.h"
Command::Command(Server &server) {
  this->server = &server;
}
Command::~Command() {}