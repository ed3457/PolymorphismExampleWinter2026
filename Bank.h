#pragma once
#include "BankAccount.h"
#include "SavingsAccount.h"

class Bank
{
private:
	// Array of pointers 
	BankAccount** accounts; // this will store all accounts 
	int counter; 
	int maxSize;
public: 
	Bank(); 

	void OpenNewAccount(); 

};

