#ifndef Command_H
#define Command_H
#include <iostream>

class Command
{
    public:
        Command();
        Command(std::string, std::string);
        std::string getCommand() const;
        std::string getSegPalabra() const;
        void setSegPalabra(std::string);
        bool desconocido();
        bool tieneSegPalabra();
        virtual void execute() = 0;
    private:
        std::string Command;
        std::string segPalabra;
};

#endif