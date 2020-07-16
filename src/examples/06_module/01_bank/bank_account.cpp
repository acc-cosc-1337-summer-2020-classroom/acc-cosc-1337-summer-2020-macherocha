//bank_account.cpp
#include "bank_account.h"
using std::vector;
using std::cout; using std::cin;



void BankAccount::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
        bank_balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && balance >= amount)
    {
        balance -= amount;
        bank_balance -= amount;
    }
}
//cout<<account;
//operator<<(cout, account)
std::ostream& operator <<(std::ostream& out, const BankAccount& account)
{
    out<<"Balance: "<<account.balance<<"\n";

    return out;
}

int BankAccount::get_bank_balance = 0;

void BranchBank::update_balance(int b)
{
    branch_balance += b;
    BankAccount::bank_balance += b;
}