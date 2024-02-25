//
// Created by simon on 25/02/2024.
//

#ifndef LAB_DEBIT_H
#define LAB_DEBIT_H
#include <iostream>
#include <string>
#include "Transaction.h"
using namespace std;

class Debit : public Transaction {
private:
    string name;
    double debitBalance;
public:
    Debit(string name, double debitBalance);
    void changeBalance(double amount) override;
    void printBalance();
    ~Debit();
};

#endif //LAB_DEBIT_H
