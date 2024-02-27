//
// Created by simon on 25/02/2024.
//

#ifndef LAB_CREDIT_H
#define LAB_CREDIT_H
#include <iostream>
#include <string>
#include "Transaction.h"
using namespace std;

class Credit : public Transaction {
private:
    double creditBalance;
public:
    explicit Credit(double creditBalance);
    void writeBalance(double creditBalance, string &name) override;
    double getBalance(string name) override;
    double calculateBalance(double balance, double creditBalance)override;
    ~Credit();
};

#endif //LAB_CREDIT_H
