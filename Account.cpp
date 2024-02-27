//
// Created by simon on 25/02/2024.
//

#include "Account.h"
#include <iostream>
#include <string>
#include "Credit.h"
#include "Debit.h"
using namespace std;

Account::Account(string name, double balance) {
    this->name = name;
    this->balance = balance;
}

void Account::addCredit(Account *account, double amount) {
    writeBalance();
    printBalance();
}

void Account::addDebit(Account *account, double amount){
}

void Account::printBalance() {
    cout << "Account " << name << " has balance " << getBalance() << endl;
}

string Account::getName() {
     return name;
}

double Account::getBalance(string &name) const {
    return balance;
}

