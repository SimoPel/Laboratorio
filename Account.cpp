//
// Created by simon on 25/02/2024.
//

#include "Account.h"
#include <iostream>
#include <string>
#include "Credit.h"
using namespace std;

Account::Account(string name, double balance) {
    this->name = name;
    this->balance = balance;
}

void Account::addTransaction(Transaction* transaction) {

}

void Account::printBalance() {
    cout << "Account " << name << " has balance " << balance << endl;
}

string Account::getName() {
    return name;
}

double Account::getBalance() const {
    return balance;
}

Account::~Account() {
    cout << "Account " << name << " has been destroyed" << endl;
}
