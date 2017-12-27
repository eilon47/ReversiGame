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
    int addGame(GameInfo &waiting);
  string getNameAt(int i);
  int getSocketIDAt(int i);
  int getSize();
    GameInfo &getGame(int i);
    void deleteGame(int i);

        private:
    GamesList();
    vector<GameInfo> *wg ;
    static GamesList* instance = nullptr;

};

#endif //REVERSIGAME_GAMESLIST_H
