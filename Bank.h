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
    explicit Bank(string name);
    static void addBankAccount(Account *account);
    static void printBankAccounts();
    static Account *getAccount(string& name);
    static bool isPresentName(string& name);
    ~Bank();
};

#endif //LAB_BANK_H
