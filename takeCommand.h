#ifndef TAKECOMMAND_H
#define TAKECOMMAND_H
#include "Character.h"
#include "Item.h"
#include "Command.h"
#include "Room.h"

class takeCommand:public Command{
    public:
        takeCommand(Character*);
        void execute();
    private:
        Character* jugador;
};

#endif //takeCommand_H