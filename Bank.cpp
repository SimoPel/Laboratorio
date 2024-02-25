//
// Created by simon on 25/02/2024.
//

#include "Bank.h"
using namespace std;

Bank::Bank(string name) {
    this->name = name;
}

void Bank::addBankAccount(string &account) {
    accounts.push_back(account);
}

void Bank::removeBankAccount(string &account) {
    accounts.remove(account);
}

void Bank::printBankAccounts() {
    for (string account : accounts) {
        cout << account << endl;
    }
}

string Bank::getName() {
    return name;
}

void Bank::setName(string &name) {
    this->name = name;
}

Bank::~Bank() {
    cout << "Bank " << name << " has been destroyed" << endl;
}
