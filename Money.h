#include <iostream>
#include <vector>
#ifndef MONEY_H
#define MONEY_H

class Money{

    private:
        std::vector<Money> allmoney;
    public:

        int Dollar = 0, Cent = 0;
        Money(const int Dollars, const int Cents);
        friend std::ostream &operator<<(std::ostream &os, const Money &money);

        friend bool operator < (const Money Dollar, const Money Cent);
        friend bool operator > (const Money Dollar, const Money Cent);
        friend bool operator <=(const Money Dollar, const Money Cent);
        friend bool operator >=(const Money Dollar, const Money Cent);
        friend bool operator !=(const Money Dollar, const Money Cent);
        friend bool operator ==(const Money Dollar, const Money Cent);
        friend Money operator +(const Money Dollar, const Money Cent);
        friend Money operator -(const Money Dollar, const Money Cent);
	
        Money(){}
        ~Money(){}
};



#endif
