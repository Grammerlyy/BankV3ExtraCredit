#include "BankAccount.h"
#include <string>
#include <iostream>

using namespace std;

BankAccount::BankAccount(string w)
{
	this->Name = w;
	this->Balance = Balance;
}
BankAccount::BankAccount(string w, double B)
{
	this->Name = w;
	this->Balance = B;
}

void BankAccount::Withdraw(double w)
{
	if (w > this->Balance)
	{
		cout << "not enough funds." << endl;
	}

	else if (w > 500)
	{
		cout << "You cannot withdraw more than 500" << endl;
	}
	else
	{
		this->Balance = (this->Balance - w);
		cout << "Withdraw Sucessfull" << endl;
	}
}
void BankAccount::Deposit(double b)
{

	if (this->Balance > 1000)
	{
		cout << "Deposit is not successful!" << endl;

	}
	else if (b > 1000)
	{
		cout << "You cannot deposit more than 1000" << endl;
	}
	else
	{
		this->Balance = (this->Balance + b);
		cout << "Deposit Successful!" << endl;
	}
}

void BankAccount::SetBalance(double b)
{
	this->Balance = b;
}

double BankAccount::GetBalance()
{
	return this->Balance;
}
string BankAccount::GetName()
{
	return this->Name;
}



