#include <iostream>
#include <vector>
#include "Account.h"

Account::Account(double Input){
	balance = Input;
}
void Account::makeDeposit(Money D){
	depo = true;
	deposit.push_back(Money (D));	
}
void Account::makeWithdrawals(Money D){
	with = true;
	withdrawal.push_back(Money (D));

}
std::ostream &operator << (std::ostream &os, const Account &D){
	os <<"$" << D.balance << std::endl;
    return os;
}
	
