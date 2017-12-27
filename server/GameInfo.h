//
// Created by elon on 25/12/17.
//
#include <string>
#ifndef REVERSIGAME_WAITINGGAME_H
#define REVERSIGAME_WAITINGGAME_H
using namespace std;
class GameInfo {
    private:
    bool available;
    int clientSocket1;
    int clientSocket2;
    string name;
    public:
    GameInfo(int clientSocket, string name);
    void addClient2(int clientSocket);
    string getName() const;
    int getClientSocket1() const;
    int getClientSocket2() const;
    bool isGameAvailable();
    bool operator==(const GameInfo &gameInfo) const;

};

#endif //REVERSIGAME_WAITINGGAME_H
