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
	void WithdrawFromAll(float b);

	void resetAccounts();

	float getAccountBalanceSum(); 
	~Bank();// Destructor: Gets called when an object is out of scope, used to clean up resources 
};

