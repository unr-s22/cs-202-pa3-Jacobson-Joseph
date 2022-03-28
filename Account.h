#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "Money.h"
#include <vector>
#include <iostream>

class Account{

	public:
    	explicit Account(Money Input);
   	Money balance;
    	std::vector<Money> deposit;
	std::vector<Money> withdrawal;
	bool depo, with;
	void makeDeposit(Money D);
	void makeWithdrawals(Money D);
	
	friend std::ostream& operator <<(std::ostream& print, Account& m_Account);
};

#endif
