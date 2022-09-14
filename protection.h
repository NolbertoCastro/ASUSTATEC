#ifndef protection_H
#define protection_H

#include <iostream>
#include "Item.h"

class protection:public Item{
    private:
        int protection;

    public:
        protection();
        protection(std::string, std::string, int, int);

        int getprotection() const;

        void setprotection(int);
};

#endif