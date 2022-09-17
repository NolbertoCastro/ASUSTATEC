#ifndef protection_H
#define protection_H

#include <iostream>
#include "item.h"

class protection:public Item{
    private:
        int protectionValue;

    public:
        protection();
        protection(std::string, std::string, int, int);

        int getProtection() const;

        void setProtection(int);
};

#endif