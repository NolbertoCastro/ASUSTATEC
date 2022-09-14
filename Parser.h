#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <sstream>
#include "wordList.h"

class Parser {
    public:
        Parser();
        Parser(wordList*);
        wordList* getcommand();
        Command* generaCommand();
    private:
        wordList* command;
};

#endif //PARSER_H