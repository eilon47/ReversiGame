//
// Created by elon on 25/12/17.
//

#ifndef REVERSIGAME_CLOSECOMMAND_H
#define REVERSIGAME_CLOSECOMMAND_H

#include "Command.h"
class CloseCommand : public Command{
 public:
  void execute(vector<string> *args);
};

#endif //REVERSIGAME_CLOSECOMMAND_H
