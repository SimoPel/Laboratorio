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
    Credit credit(amount);
    credit.writeBalance(amount, name);
}//aggiunge il credito al conto

void Account::addDebit(Account *account, double amount){
    Debit debit(amount);
    debit.writeBalance(amount, name);
}//aggiunge il debito al conto

void Account::printBalance() {
    cout << "Account " << name << " has balance " << getBalance(name) << endl;
}

double Account::getBalance(string &name) {
    ifstream file("input.txt");
    string line;
    while (getline(file, line)) {
        if (line.find(name) != string::npos) {
            return stod(line.substr(name.length()));
        }
    }
    return 0;
}//trova il saldo del conto sapendo il nome

string Account::getName(){
    return name;
}//ritorna il nome del conto


Account::~Account() = default;

