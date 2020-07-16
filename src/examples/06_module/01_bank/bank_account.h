//bank_account.h
#include<iostream>                              


#ifndef BANK_ACCOUNT_H//header guards
#define BANK_ACCOUNT_H

enum transaction{ DEPOSIT=1, WITHDRAW=2, DISPLAY=3};
enum class OPTION{DEPOSIT=1, WITHDRAW=2, DISPLAY=3, EXIT=4};//C++11

class BankAccount
{
public:
    BankAccount() : BankAccount(0){}//delegating constructor
    BankAccount(int b) : balance{b} { bank_balance += balance;} //initializer list
    int get_balance() const{return balance;}//inline class function
    void deposit(int amount);
    void withdraw(int amount);
    static int get_bank_balance(){return bank_balance;}
private:
    int balance;//lock this variable
    static int bank_balance;
};

#endif
