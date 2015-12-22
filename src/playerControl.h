#ifndef PLAYERCONTROL_H
#define PLAYERCONTROL_H

#include "entityPlayer.h"
#include "input.h"

class playerControl
{
    public:
        playerControl(entityPlayer *player);
        virtual ~playerControl();
    protected:
    private:

        entityPlayer *player;

        action jumpAct;
        action moveForward;
        action moveBack;
        action moveLeft;
        action moveRight;

};

#endif // PLAYERCONTROL_H
