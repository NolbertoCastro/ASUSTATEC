#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <sstream>
#include "ListaPalabras.h"

class Parser {
    public:
        Parser();
        Parser(ListaPalabras*);
        ListaPalabras* getcommand();
        Command* generaCommand();
    private:
        ListaPalabras* command;
};

#endif //PARSER_H