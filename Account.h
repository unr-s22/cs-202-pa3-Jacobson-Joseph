#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "Money.h"
#include <vector>
#include <iostream>

class Account: public Money{

	public:
	Money balance;
	std::vector<Money> deposit;
	std::vector<Money> withdrawal;
	bool depo, with;
	Account(Money D);
	void makeDeposit(Money D);
	void makeWithdrawals(Money D);
	
	friend std::ostream &operator <<(std::ostream &os, const Account &D);
};

#endif
