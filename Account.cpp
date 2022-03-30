#include <iostream>
#include <vector>
#include "Account.h"

void Account::makeDeposit(Money D){
	
	deposit.push_back(D);
	change = true;	
}
void Account::makeWithdrawals(Money D){
	
	withdrawal.push_back(D);
	change = true;

}
std::ostream& operator << (std::ostream& print, Account& m_Account){
	Money balance(m_Account);
	if(m_Account.change == true){
		for(int i = 0; i < m_Account.deposit.size(); i++){
			balance = balance + m_Account.deposit[i];
		}
		m_Account.change=false;

		for(int i = 0; i < m_Account.withdrawal.size(); i++){
			balance = balance - m_Account.withdrawal[i];
		}
		m_Account.change=false;
	}
	
        print << "Account Details" << std::endl;
		print << "--------------------------" << std::endl;
		print << "Current Balance:" << balance << std::endl;
		print << "--------------------------" << std::endl;


		print <<"Number of Deposits: " <<m_Account.deposit.size() << std::endl;
		print <<"--------------------"<< std::endl;

	for(int i=0; i<m_Account.deposit.size(); i++){
		print <<"("<< i +1 <<") "<< m_Account.deposit[i]<<std::endl;
	}
		print << "--------------------------"<< std::endl;
		print <<"Number of Withdrawals: "<< m_Account.withdrawal.size() << std::endl;
		print << "--------------------------" << std::endl;

	for(int i=0; i<m_Account.withdrawal.size(); i++){
		print <<"("<< i +1 <<") "<< m_Account.withdrawal[i]<<std::endl;
		}
	
	
	return print;
}

