#include "bank_account.h"
#include<iostream>

using std::cout;
using std::cin;
using std::unique_ptr;  using std::make_unique;

int main()
{
	srand(time(NULL));//force true random number generationn

	/*BankAccount* account = new CheckingAccount(500);

	BankAccount* account2 = account;
	cout<<account->get_balance()<<"\n";
	cout<<account2->get_balance()<<"\n";

	account->deposit(50);
	cout<<account->get_balance()<<"\n";
	cout<<account2->get_balance()<<"\n";
	delete account;
	account = nullptr;
	account2 = nullptr;*/
{
	SavingsAccount account;
	SavingsAccount account2 = account;
}
	/*unique_ptr<BankAccount> a = make_unique<SavingsAccount>(600);//heap
	cout<<a->get_balance()<<"\n";
	unique_ptr<BankAccount> c = make_unique<CheckingAccount>(100);
	cout<<c->get_balance()<<"\n";
	std::vector<unique_ptr<BankAccount>>accounts;
	accounts.push_back(std::move(a));
	accounts.push_back(std::move(c));

	for(auto& account: accounts)
	{
		cout<<account->get_balance()<<"\n";
	}*/

	BranchBank bank(10000);
	bank.update_balance(500);
	cout<<account;
	cout<<account.get_bank_balance()<<"\n";
	cout<<bank.get_branch_balance()<<"\n";

	return 0;
}