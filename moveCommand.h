#ifndef MOVECOMMAND_H
#define MOVECOMMAND_H
#include <iostream>
#include "Character.h"
#include "Command.h"

class moveCommand:public Command{
    public:
        moveCommand(Character*);
        void execute();
    private:
        Character* jugador;
};

#endif //moveCommand_H