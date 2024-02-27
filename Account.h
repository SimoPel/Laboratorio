//
// Created by simon on 25/02/2024.
//

#ifndef LAB_ACCOUNT_H
#define LAB_ACCOUNT_H

#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include "Transaction.h"
using namespace std;

class Account {
private:
    string name;
    double balance;
public:
    Account(string name, double balance);
    void addCredit(Account *account, double amount);
    void addDebit(Account * account, double amount);
    void printBalance();
    static double getBalance(string &name) ;
    string getName();
    ~Account();
};

#endif //LAB_ACCOUNT_H
