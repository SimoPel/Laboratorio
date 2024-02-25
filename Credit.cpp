//
// Created by simon on 25/02/2024.
//

#include "Credit.h"
using namespace std;

Credit::Credit(string name, double balance) {
    this->name = name;
    this->balance = balance;
}

void Credit::changeBalance(double amount) {
    balance += amount;
}

Credit::~Credit() {
    cout << "Credit " << name << " has been destroyed" << endl;
}


