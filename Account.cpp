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
std::ostream& operator << (std::ostream& print, Account& m_Account){
	
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
		m_Account.with=false;
	}
   	print;
	
        	std::cout << "Account Details" << std::endl;
		std::cout << "--------------------------" << std::endl;
		std::cout << "Current Balance:" << m_Account.balance << std::endl;
		std::cout << "--------------------------" << std::endl;


		std::cout<<"Number of Deposits: " <<m_Account.deposit.size() << std::endl;
		std::cout<<"--------------------"<< std::endl;

	for(int i=0; i<m_Account.deposit.size(); i++){
		std::cout<<"("<< i +1 <<") "<< m_Account.deposit[i]<<std::endl;
	}
		std::cout << "--------------------------"<< std::endl;
		std::cout<<"Number of Withdrawals: "<< m_Account.withdrawal.size() << std::endl;
		std::cout << "--------------------------" << std::endl;

	for(int i=0; i<m_Account.withdrawal.size(); i++){
		std::cout<<"("<< i +1 <<") "<< m_Account.deposit[1]<<std::endl;
		}
	return print;
}

