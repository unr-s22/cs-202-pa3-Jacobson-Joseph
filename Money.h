#include <iostream>
#include <vector>
#ifndef MONEY_H
#define MONEY_H

class Money{

    private:
        std::vector<int> allmoney;
    public:
        int GetDollars() const;
        int GetCents() const;
        explicit Money(const int Dollars, const int Cents);
        friend std::ostream &operator<<(std::ostream &os, const Money &money);

        bool operator <(const Money& allmoney);
        bool operator >(const Money& allmoney);
        bool operator <=(const Money& allmoney);
        bool operator >=(const Money& allmoney);
        bool operator !=(const Money& allmoney);
        bool operator ==(const Money& allmoney);
        Money operator +(const Money& allmoney);
        Money operator -(const Money& allmoney);

        explicit Money();
        virtual ~Money();

};



#endif