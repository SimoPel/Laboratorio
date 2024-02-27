//
// Created by simon on 25/02/2024.
//

#include "Bank.h"
#include "Account.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

Bank::Bank(string name) {
    this->name = name;
}

void Bank::addBankAccount(Account &account) {

}

void Bank::printBankAccounts() {
    ifstream file("input.txt");

    if (!file.is_open()) {
        std::cerr << "Impossibile aprire il file." << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    file.close();
}

Account *Bank::getAccount(string name) {
    ifstream file("input.txt");

    if (!file.is_open()) {
        std::cerr << "Impossibile aprire il file." << std::endl;
        return nullptr;
    }

    std::string line;
    while (std::getline(file, line)) {
        if (line.find(name) != std::string::npos) {
            file.close();
            return new Account(name, std::stod(line.substr(name.length())));
        }
    }
    file.close();
    std::cerr << "Non è presente nessun conto corrente in questa banca con questo intestatario" << std::endl;
    return nullptr;
}

bool Bank::isPresentName(string &name) {
    ifstream file("input.txt");

    if (!file.is_open()) {
        std::cerr << "Impossibile aprire il file." << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(file, line)) {
        if (line.find(name) != std::string::npos) {
            file.close();
            return true;
        }
    }
    file.close();
    return false;
}


Bank::~Bank() {
}