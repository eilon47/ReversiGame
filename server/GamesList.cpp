//
// Created by dandan on 26/12/17.
//

#include <cstdlib>
#include "GamesList.h"
GamesList::GamesList() {
    this->gi = new vector<GameInfo>;
}
int GamesList::addgame(GameInfo &gameInfo) {
    /////ADD MUTEX////
    for(int i = 0; i < gi->size(); i++) {
        if (gameInfo.getName() == this->getGame(i).getName()) {
            return -1;
        }
    }
    this->gi->push_back(gameInfo);
    return 0;
}
int GamesList::getSizeOfList() {
    return (int) this->gi->size();
}
GameInfo& GamesList::getGame(int i) {
    return this->gi->at(i);
}
GameInfo& GamesList::getGameByName(string name) {
    for(int i = 0; i < this->getSizeOfList(); i++){
        if(name == this->getGame(i).getName()){
            return getGame(i);
        }
    }
}
GameInfo& GamesList::getGameBySocket1(int clientSocket) {
    for(int i = 0; i < this->getSizeOfList(); i++){
        if(clientSocket == this->getGame(i).getClientSocket1()){
            return getGame(i);
        }
    }
}
void GamesList::deleteGame(GameInfo &gameInfo) {
    for(int i = 0; i < gi->size(); i++) {
        if (gameInfo == gi->at(i)) {
            this->gi->erase(this->gi->begin() + i);
            return;
        }
    }
}
bool GamesList::isEmpty() {
    return this->gi->empty();
}

GamesList* GamesList:: instance = 0;
GamesList* GamesList::getInstance() {
    if (!instance) {
        instance = new GamesList();
    }
    return instance;
}
bool GamesList::isGameExist(string name) {
    for(int i = 0; i < gi->size(); i++) {
        if (name == this->getGame(i).getName()) {
            return true;
        }
    }
    return false;
}
bool GamesList::isGameExist(int clientSocket1) {
    for(int i = 0; i < gi->size(); i++) {
        if (clientSocket1 == this->getGame(i).getClientSocket1()) {
            return true;
        }
    }
    return false;
}