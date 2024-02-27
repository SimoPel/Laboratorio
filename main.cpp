#include <iostream>
#include "Bank.h"
#include "Account.h"
#include "Transaction.h"
#include "Credit.h"
#include "Debit.h"
#include <string>

using namespace std;

int main() {
    Bank bank("MyBank");
    bool loop;
    do{
        cout << "Premi 1 per aggiungere un conto corrente"<< " 2 per rimuovere un conto corrente " << " 3 per stampare tutti i conti correnti"<< " 4 per uscire" <<"5 per effettuare una transazione"<<"6 per vedere la iquidità"<< endl;
        int choice;
        cin >> choice;
        switch (choice) {
            case 1: {
                cout << "Inserisci Nome e liquidità" << endl;
                string name;
                double balance;
                cin >> name >> balance;
                Account account(name, balance);
                bank.addBankAccount(account);
                break;
            }
            case 3: {
                bank.printBankAccounts();
                break;
            }
            case 4: {
                loop = false;
                break;
            }
            case 5: {
                cout << "Inserisci il nome dell'account" << endl;
                string name;
                cin >> name;
                Account account(getName(name), getBalance(name));
                cout << "Inserisci il tipo di transazione (credito o debito) e quantità" << endl;
                string description;
                double amount;
                cin >> description >> amount;
                if(description == "credito"){
                    account.addCredit(&credit);
                }
                else if(description == "debito"){
                    Debit debit(name, amount);
                    account.addTransaction(&debit);
                }
                else{
                    cout << "Scelta non valida" << endl;
                }
                break;
            }
            case 6: {
                cout << "Inserisci il nome dell'account" << endl;
                string name;
                cin >> name;
                Account account = *bank.getAccount(name);
                account.printBalance();
                break;
            }
            default: {
                cout << "Scelta on valida" << endl;
                break;
            }
        }
    } while (loop);
    return 0;
}
