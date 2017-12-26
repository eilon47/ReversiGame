//
// Created by dandan on 26/12/17.
//

#ifndef REVERSIGAME_GAMESLIST_H
#define REVERSIGAME_GAMESLIST_H
#include<vector>
#include <string>
#include "WaitingGame.h"
using namespace std;
class gamesList {
public:
    gamesList();
private:
    vector<WaitingGame> *wg ;
    int addgame(WaitingGame waiting);
};


#endif //REVERSIGAME_GAMESLIST_H
