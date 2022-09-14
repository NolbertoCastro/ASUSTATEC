#ifndef helpCommand_H
#define helpCommand_H
#include "Command.h"
#include "wordList.h"
class helpCommand:public Command{
    public:
        helpCommand(wordList*);
        void execute();
    private:
        wordList* validas;
};

#endif //helpCommand_H