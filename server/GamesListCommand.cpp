//
// Created by elon on 25/12/17.
//

#include <csignal>
#include <cstring>
#include "GamesListCommand.h"

}
GamesListCommand::GamesListCommand(Server &server): Command(server) {
  this->server = &server;
  this->waitingGames = new vector<WaitingGame>();
}
GamesListCommand::~GamesListCommand() {
  delete waitingGames;
}
void GamesListCommand::execute(vector<string> args) {
    signal(SIGPIPE, SIG_IGN);
    int size =(int) m.size();
    char point[size];
    strcpy(point, m.c_str());
    ssize_t n = write(clientSocket, &size, sizeof(size));
    if (n == -1) {
      cout << "Error writing message to client" << endl;
      return;
    }
    n = write(clientSocket, &point, sizeof(point));
    if (n == -1) {
      cout << "Error writing message to client" << endl;
      return;
    }
    if (!checkConnection(n)) {
      return;
    }
  }
}
