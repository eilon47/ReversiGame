//
// Created by dandan on 28/11/17.
//

#ifndef REVERSIGAME_SIGN_H
#define REVERSIGAME_SIGN_H

enum SIGN { XSIGN = 'X', OSIGN = 'O', EMPTY = ' '};
class Sign {

public:
    void setSign(SIGN s);
    SIGN getSign();

private:
    SIGN sign;


};

#endif //REVERSIGAME_SIGN_H


