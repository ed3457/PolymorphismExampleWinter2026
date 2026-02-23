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
		accounts[counter] = new BankAccount();
		counter++;
	}
	break; 
	case 's': case 'S':
	{
		accounts[counter] = new SavingsAccount();
		counter++;
	}
	break;

	default:
		cout << "Wrong choice!\n";
		break; 

	}

}
