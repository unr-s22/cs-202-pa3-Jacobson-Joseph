#include <iostream>

#ifndef MONEY_H
#define MONEY_H

class Money{

    private:
        int dollars, cents, allmoney;
    public:
    Money();

    friend std::ostream &operator<<(std::ostream &os, const Money &money){
        os << "$" << money.allmoney * 0.01;
        return os;
    }



};



#endif