#include <iostream>
#include <vector>
#include "Account.h"

Account::Account(Money D){
	balance = D;
}
void Account::makeDeposit(Money D){
	depo = true;
	deposit.push_back(Money (D));	
}
void Account::makeWithdrawals(Money D){
	with = true;
	withdrawal.push_back(Money (D));

}

	
