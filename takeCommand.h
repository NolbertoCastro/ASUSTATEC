#ifndef TAKECOMMAND_H
#define TAKECOMMAND_H
#include "Character.h"
#include "item.h"
#include "Command.h"
#include "Room.h"

class takeCommand:public Command{
    public:
        takeCommand(Character*);
        void execute();
    private:
        Character* Player;
};

#endif //takeCommand_H