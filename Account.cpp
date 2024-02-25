//
// Created by simon on 25/02/2024.
//

#include "Account.h"
using namespace std;

Account::Account(string name, double balance) {
    this->name = name;
    this->balance = balance;
}

void Account::addTransaction(Transaction* transaction) {
    transactions.push_back(transaction);
}

void Account::printBalance() {
    cout << "Account " << name << " has balance " << balance << endl;
}

string Account::getName() {
    return name;
}

Account::~Account() {
    cout << "Account " << name << " has been destroyed" << endl;
}
