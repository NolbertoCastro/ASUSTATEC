#ifndef useItem_H
#define useItem_H

#include <iostream>
#include "Command.h"
#include "Character.h"
#include "Item.h"
#include "Room.h"

class useItem: public Command{
    public:
        useItem(Character*);
        void execute();
    private:
        Character* Player;
};

#endif