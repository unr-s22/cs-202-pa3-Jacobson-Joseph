#include "Money.h"
#include "Account.h"
    Account.Account(300.23);

    std::ostream& operator <<(std::ostream& out, const Account& D);
    std::cout<< os << std::endl;

    Account.makeDeposit(200.00);

    Account.makeDeposit(300.24);

    Account.makeDeposit(501.22);

    for(i; i < 3; i++){
        std::cout << Account[i] <<std::endl;
    }

    Account.makeWithdrawals(300.10);
    Account.makeWithdrawals(201.34);

    for(i; i < 2; i++){
        std::cout << Account[i] <<std::endl;
    }


    return 0;
}


* Create an account with a starting balance of $300.23
* Print the account to the terminal using the overloaded << operator (i.e., `std::cout << account << std::endl`)
* Deposit into the account, in order, $200.00, $300.24, and $501.22
* Print the account to the terminal. (Verify that the sum is correct)
* Withdraw, in order, $300.10, $201.34 and again print the account to the terminal.
