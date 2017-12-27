//
// Created by dandan on 26/12/17.
//

#include <cstdlib>
#include "GamesList.h"
GamesList::GamesList() {
    this->gi = new vector<GameInfo>;
}
int GamesList::addgame(GameInfo &gameInfo) {
    for(int i = 0; i < gi->size(); i++) {
        if (gameInfo.getName() == gi->at(i).getName()) {
            return -1;
        }
    }
    this->gi->push_back(gameInfo);
    return 0;
}
int GamesList::getSizeOfList() {
    return (int) this->gi->size();
}
string GamesList::getNameOfGame(int i) {
    return this->gi->at(i).getName();
}
bool GamesList::isAvailableGame(int i) {
    return this->gi->at(i).isGameAvailable();
}
int GamesList::getSocket1(int i) {
    return this->gi->at(i).getClientSocket1();
}
int GamesList::getSocket2(int i) {
    return this->gi->at(i).getClientSocket2();
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
    if(!instance) {
        instance = new GamesList();
    }
    return instance;

}