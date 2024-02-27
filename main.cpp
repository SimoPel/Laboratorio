#include <iostream>
#include "Bank.h"
#include "Account.h"
#include <string>

using namespace std;

int main() {
    Bank bank("MyBank");
    bool loop;
    do{
        cout << "Digita un numero " << endl;
        cout << "1. Aggiungi conto corrente" << endl;
        cout << "2. Stampa tutti i conti corrente" << endl;
        cout << "3. Transazione di credito" << endl;
        cout << "4. Transazione di debito" << endl;
        cout << "5. Esci" << endl;
        int choice;
        cin >> choice;
        switch (choice) {
            case 1: {
                string name;
                double balance;
                cout << "Inserisci il nome e saldo del nuovo conto corrente: ";
                cin >> name;
                cin >> balance;
                Account *account = new Account(name, balance);
                bank.addBankAccount(account);
                break;
            }//caso 1
            case 2: {
                bank.printBankAccounts();
                break;
            }//caso 2
            case 3: {
                string name;
                cout << "Inserisci l'intestatario del conto corrente: ";
                cin >> name;
                if (bank.isPresentName(name)) {
                    Account *account = bank.getAccount(name);
                    double amount;
                    cout << "Inserisci il credito: ";
                    cin >> amount;
                    account->addCredit(account, amount);
                }
                break;
            }
            case 4: {
                string name;
                cout << "Inserisci l'intestatario del conto corrente: ";
                cin >> name;
                if (bank.isPresentName(name)) {
                    Account *account = bank.getAccount(name);
                    double amount;
                    cout << "Inserisci il debito: ";
                    cin >> amount;
                    account->addDebit(account, amount);
                }
                break;
            }
            case 5: {
                loop = false;
                break;
            }
            default: {
                cout << "scelta non valida" << endl;
                break;
            }
        }
    } while (loop);
    return 0;
}
