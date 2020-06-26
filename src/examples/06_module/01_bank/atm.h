//atm.h
#include "bank_account.h"
#ifndef ATM_H
#define ATM_H

class ATM
{
public:
    void run():
private:
    void display_menu(); //helper functions...utility functions
    int get_choice();
    void handle_transaction();
    BankAccount account;//our user defined class--composition
    int choice;

};

#endif