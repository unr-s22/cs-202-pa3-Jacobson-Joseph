#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "Money.h"
#include <vector>
#include <iostream>

class Account: public Money{

	public:
    	Account(int d, int c) : Money(d, c){};
   	
	   	Money balance;
    	
		std::vector<Money> deposit;
		std::vector<Money> withdrawal;
	bool change = false;
	void makeDeposit(Money D);
	void makeWithdrawals(Money D);
	
	friend std::ostream& operator <<(std::ostream& print, Account& m_Account);
};

#endif
