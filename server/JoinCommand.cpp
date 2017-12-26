//
// Created by elon on 25/12/17.
//

#include <cstdlib>
#include <csignal>
#include <string.h>
#include "JoinCommand.h"


JoinCommand::JoinCommand(Server &server): Command(server), connection(true) {
    this->server = &server;
}
void JoinCommand::execute(vector<string> args, GamesList &gl) {
    int numGame = 0;
    int clientSocket = atoi(args[0]);
    int clientSocket2 = 0;
    for(int i = 0; i< gl.getSize(); i++) {
        if (args[1] == gl.getNameAt(i)) {
            clientSocket2 = gl.getSocketIDAt(i);
            gl.getGame(i).addClient2(clientSocket2);
            numGame = i;
        }
    }
    if(clientSocket2 == 0) {
        server->writeToClient(clientSocket, -1);
        return;
    }
    setPlayer(clientSocket,1);
    setPlayer(clientSocket2,2);
    handleClients(gl.getGame(numGame));
    close(clientSocket);
    close(clientSocket2);
}
void JoinCommand::handleClients(GameInfo gameInfo) {
    signal(SIGPIPE, SIG_IGN);
    bool turn = true;
    while(connection) {
        if(turn){
            handlePlayingClient(gameInfo.clientSocket1);
            if(!connection) {
                server->writeToClient(gameInfo.clientSocket2, *"(-1,-1)");
                return;
            }
            cout <<  "X played: " << message << endl;

            server->writeToClient(gameInfo.clientSocket2, *message);
            if(endGame(*message)) {
                connection = false;
                return;
            }
            if(!connection) {
                server->writeToClient(gameInfo.clientSocket1, *"(-1,-1)");
                return;
            }
            if(badMove(*message)) {
                continue;
            }
            turn = !turn;
        } else {
            handlePlayingClient(gameInfo.clientSocket2);
            if(!connection) {
                server->writeToClient(gameInfo.clientSocket1, *"(-1,-1)");
                return;
            }
            cout <<  "O played: " << message << endl;
            server->writeToClient(gameInfo.clientSocket1, *message);
            if(endGame(*message)) {
                connection = false;
                return;
            }
            if(!connection) {
                server->writeToClient(gameInfo.clientSocket2, *"(-1,-1)");
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
