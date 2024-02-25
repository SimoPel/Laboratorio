//
// Created by simon on 25/02/2024.
//

#include "Debit.h"
using namespace std;

Debit::Debit(string name, double balance) {
    this->name = name;
    this->debitBalance = balance;
}

void Debit::changeBalance(double amount) {
    debitBalance += amount;
}

void Debit::printBalance() {
    cout << "Debit " << name << " has balance " << debitBalance << endl;
}

Debit::~Debit() {
    cout << "Debit " << name << " has been destroyed" << endl;
}
