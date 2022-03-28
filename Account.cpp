#include <iostream>
#include <vector>
#include "Account.h"

Account::Account(Money Input){
	balance = Input;
}
void Account::makeDeposit(Money D){
	
	deposit.push_back(Money (D));
	depo = true;	
}
void Account::makeWithdrawals(Money D){
	
	withdrawal.push_back(Money (D));
	with = true;

}
std::ostream &operator << (std::ostream &os, Account &m_Account){
	
	if(m_Account.depo == true){
		for(Money D : m_Account.deposit){
			m_Account.balance = m_Account.balance + D;
		}
		m_Account.depo=false;
	}

	if (m_Account.with == true){
		for(Money D : m_Account.withdrawal){
			m_Account.balance = m_Account.balance - D;
		}
	}
	m_Account.with=false;
   
}

print
        std::cout << "Account Details" << std::endl;
std::cout << "--------------------------" << std::endl;
std::cout << "Current Balance:" << account.balance << std::endl;
std::cout << "--------------------------" << std::endl;


Number of Deposits: 3
--------------------
(1) $100.33
(2) $100.33
(3) $100.33
--------------------------
Number of Withdrawals: 1
--------------------------
(1) $200.44
----

std::cout << "" << std::endl;
std::cout << "" << std::endl;
std::cout << "" << std::endl;
std::cout << "" << std::endl;

