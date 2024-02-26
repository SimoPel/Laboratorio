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
    void addTransaction(Transaction* transaction);
    void printBalance();
    string getName();
    double getBalance() const;
    ~Account();
};

#endif //LAB_ACCOUNT_H
