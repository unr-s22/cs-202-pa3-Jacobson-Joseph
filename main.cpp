#include <iostream>
#include <vector>
#include "Money.h"
#include "Account.h"
    
    Money Moneyyy(400,23);
    Account account(Moneyyy);


    std::cout << account << std::endl;

    account.makeDeposit(200.00);

    account.makeDeposit(300.24);

    account.makeDeposit(501.22);

    for (int i=0; i<4; i++){
        std::cout << Account[i] <<std::endl;
    }

    account.makeWithdrawals(300.10);
    account.makeWithdrawals(201.34);

    for (int i=0; i<3; i++){
        std::cout << account[i] <<std::endl;
    }

/*
std::cout << "Account Details
--------------------------
Current Balance:$100.55
--------------------------
Number of Deposits: 3
--------------------
(1) $100.33
(2) $100.33
(3) $100.33
--------------------------
Number of Withdrawals: 1
--------------------------
(1) $200.44" << std::endl;

*/
    return 0;
}

