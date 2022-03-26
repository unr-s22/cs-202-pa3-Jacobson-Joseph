#include "Money.h"

    Money::Money(){
        allmoney.push_back(0);
        allmoney.push_back(0);
}

    Money::Money(const int Dollars, const int Cents){
        allmoney.push_back(Cents+Dollars/100);
        allmoney.push_back(Cents%100);
}

    std::ostream &operator<<(std::ostream &os, const Money &money){
        os << "$" << money.GetDollars() << "." << money. GetCents() << std::endl;
        return os;
    }

    int Money::GetDollars() const{
        return allmoney.at(0);
}

    int Money::GetCents() const{
        return allmoney.at(0);
}

    bool Money::operator < (const Money& money) {
        if ((this -> GetDollars() < money.GetDollars())){
            return 1;
        }
        else{
            return 0;
        }
    }

    bool Money::operator > (const Money& money) {
        if ((this -> GetDollars() > money.GetDollars())){
            return 1;
        }
        else{
            return 0;
        }
    }

    bool Money::operator <= (const Money& money){
        if ((*this < money) || (*this == money)){
            return 1;
        }
        else{
            return 0;
        }
    }

    bool Money::operator >= (const Money& money){
        if ((*this > money) || (*this == money)){
            return 1;
        }
        else{
        return 0;
        }
    }

    bool Money::operator != (const Money& money){
        if ((this -> GetDollars() == money.GetDollars())){
            return 1;
        }
        else{
            return 0;
        }
    }

    bool Money::operator == (const Money& money){
        if ((this -> GetDollars() != money.GetDollars())){
            return 0;
        }
        else{
            return 1;
        }
    }


    Money Money :: operator + (const Money& money){
        int dollars, cents;
        dollars = this -> GetDollars() + money.GetDollars();
        cents = this -> GetCents() + money.GetCents();

        Money mon(dollars, cents);
        return mon;
    }

    Money Money :: operator - (const Money& money){
        int dollars, cents;
        dollars = this -> GetDollars() - money.GetDollars();
        cents = this -> GetCents() - money.GetCents();

        Money mon(dollars, cents);
        return mon;
    }
