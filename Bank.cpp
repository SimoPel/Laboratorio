//
// Created by simon on 25/02/2024.
//

#include "Bank.h"
#include "Account.h"
#include <iostream>
#include <string>

using namespace std;

Bank::Bank(string name) {
    this->name = name;
}

void Bank::addBankAccount(Account *account) {
    ofstream file("input.txt", ios::app);
    string name = account->getName();
    file << account->getName() << " " << account->getBalance(name) << endl;
    file.close();
}//aggiunge un conto corrente al file


void Bank::printBankAccounts() {
    ifstream file("input.txt");
    if (!file.is_open()) {
        std::cerr << "Impossibile aprire il file." << std::endl;
        return;
    }
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}//stampa tutti i conti correnti presenti nel file

Account *Bank::getAccount(string &name) {
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
}//trova il conto corrente sapendo il nome

bool Bank::isPresentName(string &name) {
    ifstream file("input.txt");
    if (!file.is_open()) {
        std::cerr << "Impossibile aprire il file." << std::endl;
        return false;
    }
    string line;
    while (getline(file, line)) {
        if (line.find(name) != string::npos) {
            file.close();
            return true;
        }
    }
    file.close();
    return false;
}//verifica se il nome è già presente

Bank::~Bank() = default;