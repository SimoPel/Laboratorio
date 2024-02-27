//
// Created by simon on 25/02/2024.
//

#include "Credit.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Credit::Credit(double balance) {
    this->creditBalance = balance;
}

void Credit::writeBalance(double amount, string &name) {
    ifstream file("input.txt");
    ofstream file2("input.txt");
    string line;
    while (getline(file, line)) {
        if (line.find(name) != string::npos) {
            file2 << name << " " << calculateBalance(getBalance(name), amount) << endl;
        }
    }
}//scrive il saldo nel file avendo il nome ed il saldo della transazione

double Credit::getBalance(string name) {
    ifstream file("input.txt");
    string line;
    while (getline(file, line)) {
        if (line.find(name) != string::npos) {
            return creditBalance;
        }
    }
    return 0;
}//trova il saldo del conto sapendo il nome

double Credit::calculateBalance(double balance, double creditBalance) {
    return balance + creditBalance;
}//calcola il saldo

Credit::~Credit() = default;


