//
// Created by elon on 25/12/17.
//

#include <cstdlib>
#include <csignal>
#include <string.h>
#include "JoinCommand.h"
pthread_mutex_t join_mutex;

JoinCommand::JoinCommand(): Command(), connection(true) { }
void JoinCommand::execute(vector<string> args) {
    int numGame = 0;
    int clientSocket2 = atoi(args[0]);
    GamesList *gamesList = GamesList::getInstance();
    int clientSocket1 = 0;

    pthread_mutex_lock(&join_mutex);
    for(int i = 0; i< gamesList->getSize(); i++) {
        if (args[1] == gamesList->getNameAt(i) && gamesList->getGame(i).isAvailable()) {
            clientSocket1 = gamesList->getSocketIDAt(i);
            gamesList->getGame(i).addClient2(clientSocket1);
            numGame = i;
        }
    }
    pthread_mutex_unlock(&join_mutex);

    if(clientSocket1 == 0) {
        server->writeToClient(clientSocket2, -1);
        return;
    }
    server->writeToClient(clientSocket1, 1);
    server->writeToClient(clientSocket2, 1);
    handleClients(gamesList->getGame(numGame));
    close(clientSocket1);
    close(clientSocket2);
}
void JoinCommand::handleClients(GameInfo gameInfo) {
    signal(SIGPIPE, SIG_IGN);
    bool turn = true;
    while(connection) {
        if(turn){
            handlePlayingClient(gameInfo.getClientSocket1());
            if(!connection) {
                server->writeToClient(gameInfo.getClientSocket2(), *"(-1,-1)");
                return;
            }
            cout <<  "X played: " << message << endl;

            server->writeToClient(gameInfo.getClientSocket2(), *message);
            if(endGame(*message)) {
                connection = false;
                return;
            }
            if(!connection) {
                server->writeToClient(gameInfo.getClientSocket1(), *"(-1,-1)");
                return;
            }
            if(badMove(*message)) {
                continue;
            }
            turn = !turn;
        } else {
            handlePlayingClient(gameInfo.getClientSocket2());
            if(!connection) {
                server->writeToClient(gameInfo.getClientSocket1(), *"(-1,-1)");
                return;
            }
            cout <<  "O played: " << message << endl;
            server->writeToClient(gameInfo.getClientSocket1(), *message);
            if(endGame(*message)) {
                connection = false;
                return;
            }
            if(!connection) {
                server->writeToClient(gameInfo.getClientSocket2(), *"(-1,-1)");
                return;
            }
            if(badMove(*message)) {
                continue;
            }
            turn = !turn;
        }
    }
}
void JoinCommand::handlePlayingClient(int clientSocket) {
    signal(SIGPIPE, SIG_IGN);
    int size = 0;
    ssize_t n = read(clientSocket, &size, sizeof(&size));
    if (n == -1) {
        cout << "Error reading point" << endl;
        return;
    }
    if(!checkConnection(n)) {
        return;
    }
    char point[size + 1];
    bzero((char*)point,sizeof(point));
    n = read(clientSocket, &point, sizeof(point));
    if (n == -1) {
        cout << "Error reading point" << endl;
        return;
    }
    if(!checkConnection(n)) {
        return;
    }
    *message = point;
}

void JoinCommand::setPlayer(int clientSocket, int numTurn) {
    ssize_t n = write(clientSocket, &numTurn, sizeof(numTurn));
    if (n == -1) {
        cout << "Error writing board to socket" << endl;
        return;
    }
    if(!checkConnection(n)) {
        return;
    }
}

bool JoinCommand::checkConnection(ssize_t n) {
    if (n == 0) {
        cout << "Player disconnected" << endl;
        connection = false;
    }
    return connection;
}
bool JoinCommand::endGame(string point) {
    if (strcmp(point.c_str(), "(-1,-1)") == 0) {
        return true;
    }
    return false;
}
bool JoinCommand::badMove(string point) {
    if (strcmp(point.c_str(), "(0,0)") == 0) {
        return true;
    }
    return false;
}
