//
// Created by dandan on 26/12/17.
//

#include "GamesList.h"

gamesList::gamesList() {
    this->wg = new vector<WaitingGame>;
}
int gamesList::addgame(WaitingGame waiting) {
    vector<string>::iterator it;
    for(int i = 0; i < wg->size(); i++) {
        if (waiting.getName() == wg->at(i).getName()) {
            return -1;
        }
    }
    this->wg->push_back(waiting);
    return 0;
}