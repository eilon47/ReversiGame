//
// Created by elon on 25/12/17.
//

#include <cstdlib>
#include <csignal>
#include <string.h>
#include <iostream>
#include "JoinCommand.h"
#include "GamesList.h"
pthread_mutex_t join_mutex;

void JoinCommand::execute(vector<string> *args) {
    connection = true;
    if(args->size() < 2){
        return;
    }
    int numGame = 0;
    int clientSocket1 = 0;
    int clientSocket2 = atoi(args->at(0).c_str());
    string name = args->at(1);
    GamesList *gamesList = GamesList::getInstance();
    pthread_mutex_lock(&join_mutex);
    for(int i = 0; i< gamesList->getSizeOfList(); i++) {
        GameInfo game = gamesList->getGame(i);
        if (name == game.getName() && game.isGameAvailable()) {
            clientSocket1 = game.getClientSocket2();
            game.addClient2(clientSocket2);
            numGame = i;
            break;
        }
    }
    pthread_mutex_unlock(&join_mutex);
    if(clientSocket1 == 0) {
       writeToClient(clientSocket2, -1);
        return;
    }
    setPlayer(clientSocket1,1);
    setPlayer(clientSocket2,1);
    handleClients(gamesList->getGame(numGame));
    ///
    close(clientSocket1);
    close(clientSocket2);
    ///
}
void JoinCommand::handleClients(GameInfo gameInfo) {
    signal(SIGPIPE, SIG_IGN);
    //First initialize;
    int playing = gameInfo.getClientSocket1();
    int waiting = gameInfo.getClientSocket2();
    connection = true;
    while(connection) {
        handlePlayingClient(playing);
        if(!connection) {
            this->writeToClient(waiting, "(-1, -1)");
            return;
        }
        cout <<  "Client socket " << playing << " played:"<< message << endl;
        this->writeToClient(waiting, *message);
        if(endGame(*message)) {
            connection = false;
            return;
        }
        if(!connection) {
            this->writeToClient(playing, "(-1, -1)");
            return;
        }
        if(badMove(*message)) {
            continue;
        }
        //Swap playing and waiting.
        int temp = playing;
        playing = waiting;
        waiting = temp;
    }
}
void JoinCommand::handlePlayingClient(int clientSocket) {
    signal(SIGPIPE, SIG_IGN);
    int size = 0;
    ssize_t n = this->readFromClient(clientSocket, size);
    if(!checkConnection(n)) {
        return;
    }
    char point[size + 1];
    n = this->readFromClient(clientSocket, point);
    if(!checkConnection(n)) {
        return;
    }
    *message = point;
}

void JoinCommand::setPlayer(int clientSocket, int numTurn) {
    if(this->writeToClient(clientSocket, numTurn) == -1){
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
ssize_t JoinCommand::readFromClient(int clientSocket,int &num) {
    ssize_t n = read(clientSocket, &num, sizeof(&num));
    if (n == -1) {
        cout << "Error reading point" << endl;
        return -1;
    }
    return n;
}
ssize_t JoinCommand::readFromClient(int clientSocket,char *msg) {
    bzero(msg,sizeof(msg));
    ssize_t n = read(clientSocket, &msg, sizeof(msg));
    if (n == -1) {
        cout << "Error reading point" << endl;
        return -1;
    }

    return n;
}
ssize_t JoinCommand::writeToClient(int clientSocket,int num) {
    ssize_t n = write(clientSocket, &num, sizeof(num));
    if (n == -1) {
        cout << "Error writing message to client" << endl;
        return -1;
    }
    return n;
}
ssize_t JoinCommand::writeToClient(int clientSocket, string msg) {
    char m[msg.size()];
    strcpy(m, msg.c_str());
    this->writeToClient(clientSocket, (int) msg.size());
    ssize_t n = write(clientSocket, &m, sizeof(m));
    if (n == -1) {
        cout << "Error writing message to client" << endl;
        return -1;
    }
    return n;
}