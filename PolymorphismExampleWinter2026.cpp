// PolymorphismExampleWinter2026.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "SavingsAccount.h"
#include "Bank.h"
int main()
{
	/*BankAccount* ba1 = new BankAccount(2000);
	ba1->withdraw(200);

	cout << ba1->getBalance() << endl;


	SavingsAccount* ba2 = new SavingsAccount(2000,0.05);

	ba2->withdraw(200);

	cout << ba2->getBalance() << endl;



	BankAccount* ba3 = new SavingsAccount(2000, 0.05);
	ba3->withdraw(200); */

	// Early binding (default): C++ will use the base class code copies
	// (look at the type of the pointer not the object) 

	// Late binding: C++ will use the derived class code copies
	// (look at the type of the object not the pointer)
	// To turn on, add the keyword: Virtual at the base class function

	//cout << ba3->getBalance() << endl;

	// next step: Put objects into an array to execute one function for all 

	Bank Chase;

	Chase.OpenNewAccount();
	Chase.OpenNewAccount();
	Chase.OpenNewAccount();

	Chase.WithdrawFromAll(200);
}

