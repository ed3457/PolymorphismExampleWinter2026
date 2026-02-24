#include "Bank.h"
#include <iostream>
using namespace std; 
Bank::Bank()
{
	maxSize = 3; 

	counter = 0;

	accounts = new BankAccount * [maxSize];
}

void Bank::OpenNewAccount()
{
	cout << "Please select an account type: (B=Bank Account, S=Savings)\n";
	char choice; 
	cin >> choice;
	switch (choice) 
	{
	case 'b': case 'B':
	{   
		cout << "Enter Balance:\n";
		float balance; 
		cin >> balance;

		accounts[counter] = new BankAccount(balance);
		counter++;
	}
	break; 
	case 's': case 'S':
	{
		cout << "Enter Balance:\n";
		float balance;
		cin >> balance;

		cout << "Enter Rate:\n";
		float rate;
		cin >> rate;
		accounts[counter] = new SavingsAccount(balance,rate);
		counter++;
	}
	break;

	default:
		cout << "Wrong choice!\n";
		break; 

	}

}

void Bank::WithdrawFromAll(float b)
{
	for (int i=0; i < counter; i++)
	{
		accounts[i]->withdraw(b);
		cout << "Balance left = " << accounts[i]->getBalance()<<endl;
	}

}

void Bank::resetAccounts()
{
	for (int i = 0; i < counter; i++)
		delete accounts[i];

	delete[] accounts; 

}

float Bank::getAccountBalanceSum()
{
	float sum = 0;
	for (int i = 0; i < counter; i++)
		sum+=accounts[i]->getBalance();

	return sum;
}
