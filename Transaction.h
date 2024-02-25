//
// Created by simon on 25/02/2024.
//

#ifndef LAB_TRANSACTION_H
#define LAB_TRANSACTION_H
#include <iostream>
#include <string>
using namespace std;

class Transaction {
public:
    virtual void changeBalance(double amount) = 0;
    virtual ~Transaction() = default;
};

#endif //LAB_TRANSACTION_H
