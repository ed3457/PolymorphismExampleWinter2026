#include "SavingsAccount.h"

void SavingsAccount::setRate(float r)
{
	interestRate = r;
}

float SavingsAccount::getRate()
{
	return interestRate;
}

SavingsAccount::SavingsAccount()
{
	setRate(0.02);
}

SavingsAccount::SavingsAccount(float b, float r):BankAccount(b)
{
	setRate(r);
}

void SavingsAccount::withdraw(float a)
{
	//TODO: Validate the balance 
	BankAccount::withdraw(a+5);


}