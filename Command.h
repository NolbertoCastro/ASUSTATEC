#ifndef Command_H
#define Command_H
#include <iostream>

class Command
{
    public:
        Command();
        Command(std::string, std::string);
        std::string getCommand() const;
        std::string getprompt() const;
        void setprompt(std::string);
        bool unKnown();
        bool promptExistance();
        virtual void execute() = 0;
    private:
        std::string command;
        std::string prompt;
};

#endif