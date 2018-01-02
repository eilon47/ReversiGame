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
  static GamesList* getInstance();
  static void deleteGameList();
  int addgame(GameInfo &gameInfo);
  GameInfo& getGame(int i);
  GameInfo& getGameByName(string name);
  GameInfo& getGameBySocket1(int clientSocket);
  bool isGameExist(string name);
  bool isGameExist(int clientSocket1);
  int getSizeOfList();
  bool isEmpty();
  void deleteGame(GameInfo &gameInfo);
private:
    GamesList();
    GamesList(const GamesList &);
    ~GamesList();
    vector<GameInfo> *gi ;
    static GamesList* instance;
    static pthread_mutex_t lock;

};

#endif //REVERSIGAME_GAMESLIST_H
