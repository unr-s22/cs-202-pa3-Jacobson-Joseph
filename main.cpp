#include <iostream>
#include <vector>
#include "Money.h"
#include "Account.h"
int main(){
    Account account(300,23);
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

    
    Account Money1(100,00);
    Account Money2(200,03);

	if(Money1<Money2){
		std::cout<<"Less than works!"<<std::endl;
	}
    

    
	if(Money1<=Money2){
		std::cout<<"Less than/equals to works!"<<std::endl;
	}
    
    	if(Money1!=Money2){
		std::cout<<"Not equals to works!"<<std::endl;
	}
	
    if(Money2>Money1){
		std::cout<<"Greater than works!"<<std::endl;
	}
	
    if(Money2>=Money1){
		std::cout<<"Greater than/equals to works!"<<std::endl;
	}

    Account Money3(100,00);
    Account Money4(100,00);

    
	if(Money3==Money4){
		std::cout<<"Equal too works"<<std::endl;
	}
	

    return 0;
}


