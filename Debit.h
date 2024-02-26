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
    double debitBalance;
public:
    explicit Debit(double debitBalance);
    void writeBalance(double debitBalance, string &name) override;
    double getBalance(string name) override;
};

#endif //LAB_DEBIT_H
