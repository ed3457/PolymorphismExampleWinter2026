#pragma once
#include "BankAccount.h"
class SavingsAccount : public BankAccount
{
private:
	float interestRate;

public:

	void setRate(float r);
	float getRate(); 

	void withdraw(float a);// override 

	SavingsAccount();
	SavingsAccount(float b, float r);
};

