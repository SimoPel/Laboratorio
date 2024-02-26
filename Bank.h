//
// Created by simon on 25/02/2024.
//

#ifndef LAB_BANK_H
#define LAB_BANK_H
#include <iostream>
#include <string>
#include "Account.h"
using namespace std;

class Bank {
private:
    string name;
public:
    Bank(string name);
    void addBankAccount(Account &account);
    void printBankAccounts();
    Account *getAccount(string name);
    bool isPresentName(string& name);
    ~Bank();
};

#endif //LAB_BANK_H
