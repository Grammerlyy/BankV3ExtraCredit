#include <iostream>
#include <string>
#include <cstdio>
#include "BankAccount.h"
using namespace std;

int main()
{

    char choice;
    do
    {
        double b, w;
        string N;

        cout << "Bank Information" << endl;
        cout << "<=================>\n" << endl;
        cout << "Enter Account Name -> " << endl;
        getline(cin, N);
        cout << "\nPlease Enter Account's Balance--> $" << endl;
        cin >> b;
        BankAccount Owners(N, b);


        cout << "\nUsername-->  " << Owners.GetName() << endl;
        cout << "\nPrevious Balance amount-->  " << b << endl;

        cout << "\nHow much would you like to withdraw-->>  " << endl;
        cin >> w;
        Owners.Withdraw(w);

        cout << "New Balance is this -->" << Owners.GetBalance() << endl;

        cout << "\n\nHow much would you like you deposit-->  " << endl;
        cin >> b;
        Owners.Deposit(b);

        cout << "\nNew Balance is this -->" << Owners.GetBalance() << endl;

        cin.ignore();
        cout << "\n\nBank Information" << endl;
        cout << "<=================>\n" << endl;
        cout << "Enter Account Name -> " << endl;
        getline(cin, N);

        cout << "\nPlease Enter Account's Balance--> $" << endl;
        cin >> b;
        BankAccount Owners2(N, b);
        Owners2.SetBalance(b);

        cout << "\nUsername-->  " << Owners2.GetName() << endl;
        cout << "\nPrevious Balance amount-->  " << b << endl;

        cout << "\nHow much would you like to withdraw-->>  " << endl;
        cin >> w;
        Owners2.Withdraw(w);

        cout << "New Balance is this -->" << Owners2.GetBalance() << endl;

        cout << "\n\nHow much would you like you deposit-->  " << endl;
        cin >> b;
        Owners2.Deposit(b);

        cout << "\nNew Balance is this -->" << Owners2.GetBalance() << endl;
    }while (choice != 'x');
}

