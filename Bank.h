//
// Created by simon on 25/02/2024.
//

#ifndef LAB_BANK_H
#define LAB_BANK_H
#include <iostream>
#include <string>
#include <list>
using namespace std;

class Bank {
private:
    std::string name;
    std::list<std::string> accounts;
public:
    Bank(std::string name);
    void addBankAccount(string &account);
    void removeBankAccount(string &account);
    void printBankAccounts();
    string getName();
    void setName(string &name);
    ~Bank();
};

#endif //LAB_BANK_H
