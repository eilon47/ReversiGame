//
// Created by dandan on 26/12/17.
//

#ifndef REVERSIGAME_GAMESLIST_H
#define REVERSIGAME_GAMESLIST_H
#include<vector>
#include <string>
#include "GameInfo.h"
using namespace std;
class GamesList {
public:
    static GamesList* getInstance( );
    int addgame(GameInfo &gameInfo);
    GameInfo getGame(int i);
    int getSizeOfList();
    bool isEmpty();
    void deleteGame(GameInfo &gameInfo);
private:
    GamesList();
    vector<GameInfo> *gi ;
    static GamesList* instance = nullptr;

};

#endif //REVERSIGAME_GAMESLIST_H
