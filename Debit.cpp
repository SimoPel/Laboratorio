//
// Created by simon on 25/02/2024.
//

#include "Debit.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Debit::Debit(double balance) {
    this->debitBalance = balance;
}

void Debit::writeBalance(double amount, string &name) {
    ifstream file("input.txt");
    ofstream file2("input.txt");
    string line;
    while (getline(file, line)) {
        if (line.find(name) != string::npos) {
            file2 << name << " " << getBalance(name)-amount << endl;
        }
    }
}

double Debit::getBalance(string name) {
    ifstream file("input.txt");
    string line;
    while (getline(file, line)) {
        if (line.find("Debit") != string::npos) {
            return debitBalance;
        }
    }
    return 0;
}
