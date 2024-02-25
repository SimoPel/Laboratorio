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
    string name;
    double balance;
public:
    Credit(string name, double balance);
    void changeBalance(double amount) override;
    ~Credit();
};

#endif //LAB_CREDIT_H
