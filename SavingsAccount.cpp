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

void BankAccount::withdraw(float a)
{
	//TODO: Validate the balance 
	balance -= (a+5);


}