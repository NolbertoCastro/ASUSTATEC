#ifndef helpCommand_H
#define helpCommand_H
#include "Command.h"
#include "ListaPalabras.h"
class helpCommand:public Command{
    public:
        helpCommand(ListaPalabras*);
        void execute();
    private:
        ListaPalabras* validas;
};

#endif //helpCommand_H