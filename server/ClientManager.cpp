//
// class of ClientManager.
// in charge of managing all the clients.
//

#include "ClientManager.h"
static void* doCommand(void * ci);
/**
 * ClientInfo holds a pointer to the commang manager
 * and the client socket number.
 */
struct clientInfo {
  CommandsManager *cm;
  int cSocket;
};

ClientManager::ClientManager() {
    this->cm = new CommandsManager();
    this->threads = new vector<pthread_t>;
}
ClientManager::~ClientManager(){
  delete this->cm;
}
void ClientManager::cancelAllThreads() {
  GamesList *gl = GamesList::getInstance();
  //GameList deletes games and closes all sockets from the game
  for(int i = 0 ; i < gl->getSizeOfList(); i++) {
    gl->deleteGame(gl->getGame(i));
  }
  for(int i = 0; i < this->threads->size(); i++){
    pthread_cancel(threads->at(i));
  }
}

static void* doCommand(void *info) {
    signal(SIGPIPE, SIG_IGN);
  clientInfo *ci = (clientInfo *) info;
  int clientSocket = ci->cSocket;
  CommandsManager *commandsManager = ci->cm;
    while(true) {
      int size = 0;
      ssize_t n = read(clientSocket, &size, sizeof(size));
      if (n == -1) {
          cout << "Error reading point" << endl;
        return NULL;
      }
      char message[size];
      bzero((char *) message, sizeof(message));
      ssize_t n2 = read(clientSocket, &message, sizeof(message));
      cout << message << endl;
      if (n2 == -1) {
        cout << "Error reading point" << endl;
        return NULL;
      }
      //String of message
      string str(message);
      istringstream iss(str);
      //First word for command.
      string command;
      iss >> command;
      vector<string> args;
      string arg;
      iss >> arg;
      do {
        args.push_back(arg);
        iss >> arg;
      } while (iss);
      commandsManager->executeCommand(command, args, clientSocket);
      if (command == "start") {
        GamesList *gamesList = GamesList::getInstance();
        if (gamesList->isGameExist(clientSocket)) {
          GameInfo gi = gamesList->getGameBySocket1(clientSocket);
          while (gi.isGameAvailable()) {/*Wait for other player to join.*/}
          break;
        }
      }
    }
}
void ClientManager::handleClient(int clientId) {
    clientInfo *ci = new clientInfo;
    ci->cm = this->cm;
    ci->cSocket = clientId;
    pthread_t thread;
    int rc = pthread_create(&thread, NULL, doCommand , (void *) ci);
    if (rc) {
        cout << "Error: unable to create thread, " << rc << endl;
        exit(-1);
    }
    this->threads->push_back(thread);
}



