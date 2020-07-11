#include "bank_account.h"
#include<iostream>

using std::cout;
using std::cin;

int main()
{

	BankAccount account = get_account(1); //create an instance/variable of class in stack memory
	cout<<"Account: " <<account.get_balance()<<"\n";
	//ATM atm(account);
	//atm.run();

	BankAccount account1 = account;
	cout<<"Account1: "<<account1.get_balance()<<"\n";
	int balance = account.get_balance();

	return 0;
}