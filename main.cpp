#include <iostream>
#include <vector>
#include "Money.h"
#include "Account.h"
int main(){
    Money Moneyyy(400,23);
    Account account(Moneyyy);

    std::cout << account << std::endl;

    Money Deposit1(200, 00);
    Money Deposit2(300, 24);
    Money Deposit3(501, 22);
    account.makeDeposit(Deposit1);
    account.makeDeposit(Deposit2);
    account.makeDeposit(Deposit3);

    std::cout << account << std::endl;



    Money Withdrawal1(300,10);
    Money Withdrawal2(201, 34);
    account.makeWithdrawals(Withdrawal1);
    account.makeWithdrawals(Withdrawal2);

    std::cout << account << std::endl;

    return 0;
}


