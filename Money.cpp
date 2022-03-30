#include "Money.h"
Money::Money(const int Dollars, const int Cents){
            
            Dollar=Dollars;  
            Cent=Cents;
}

    std::ostream &operator<<(std::ostream &os, const Money &money){
        os << "$" << money.Dollar << "." << money.Cent << std::endl;
        return os;
    }

    bool operator < (const Money M1, const Money M2){

        int FirstValue=M1.Dollar + M1.Cent;
        int SecondValue=M2.Dollar + M2.Cent;
            if (FirstValue<SecondValue)
            { 
                return 1;
            }
            else {
                return 0;
            }
       }

     bool operator > (const Money M1, const Money M2){

        int FirstValue=M1.Dollar + M1.Cent;
        int SecondValue=M2.Dollar - M2.Cent;
            if (FirstValue>SecondValue)
            { 
                return 1;
            }
            else {
                return 0;
            }
       }

    bool operator <= (const Money M1, const Money M2){

        int FirstValue=M1.Dollar + M1.Cent;
        int SecondValue=M2.Dollar - M2.Cent;
            if (FirstValue<=SecondValue)
            { 
                return 1;
            }
            else {
                return 0;
            }
       }

    bool operator >= (const Money M1, const Money M2){

        int FirstValue=M1.Dollar + M1.Cent;
        int SecondValue=M2.Dollar - M2.Cent;
            if (FirstValue>=SecondValue)
            { 
                return 1;
            }
            else {
                return 0;
            }
       }

    bool operator != (const Money M1, const Money M2){

        int FirstValue=M1.Dollar + M1.Cent;
        int SecondValue=M2.Dollar - M2.Cent;
            if (FirstValue!=SecondValue)
            { 
                return 1;
            }
            else {
                return 0;
            }
    }
    
    bool operator == (const Money M1, const Money M2){

        int FirstValue=M1.Dollar + M1.Cent;
        int SecondValue=M2.Dollar - M2.Cent;
            if (FirstValue == SecondValue)
            { 
                return 1;
            }
            else {
                return 0;
            }
    }

    Money operator + (const Money M1, const Money M2){

        int D=M1.Dollar + M2.Dollar;
        int C=M1.Cent + M2.Cent;
        if (C >= 100){
            D++;
            C = C-100;
        };

        return Money(D,C);
    }

     Money operator - (const Money M1, const Money M2){

        int D=M1.Dollar - M2.Dollar;
        int C=M1.Cent - M2.Cent;

        if (C < 0){
            D--;
            C = C+100;
       };

        return Money(D,C);
    }
