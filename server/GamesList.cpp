//
// Created by dandan on 26/12/17.
//

#include <cstdlib>
#include "GamesList.h"

GamesList::GamesList() {
    this->wg = new vector<GameInfo>;
}
int GamesList::addgame(GameInfo &waiting) {
    vector<string>::iterator it;
    for(int i = 0; i < wg->size(); i++) {
        if (waiting.getName() == wg->at(i).getName()) {
            return -1;
        }
    }
    this->wg->push_back(waiting);
    return 0;
}
int GamesList::getSize() {
    return (int) this->wg->size();
}
string GamesList::getNameAt(int i) {
    return this->wg->at(i).getName();
}
int GamesList::getSocketIDAt(int i) {
    return atoi(this->wg->at(i).getClientSocket());
}