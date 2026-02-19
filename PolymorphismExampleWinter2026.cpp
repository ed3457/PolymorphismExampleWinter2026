// PolymorphismExampleWinter2026.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "SavingsAccount.h"
int main()
{
	BankAccount* ba1 = new BankAccount(2000);
	ba1->withdraw(200);

	cout << ba1->getBalance() << endl;


	SavingsAccount* ba2 = new SavingsAccount(2000,0.05);

	ba2->withdraw(200);

	cout << ba2->getBalance() << endl;



	BankAccount* ba3 = new SavingsAccount(2000, 0.05);
	ba3->withdraw(200);

	cout << ba3->getBalance() << endl;
}

