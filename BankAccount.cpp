#include "BankAccount.h"
#include "SavingsAccount.h"


void BankAccount::withdraw(float a)
{
	//TODO: Validate the balance 
	balance -= a;


}

void BankAccount::deposit(float a)
{
	balance += a;
}

BankAccount::BankAccount()
{
	balance = 1000;
}

BankAccount::BankAccount(float b)
{
	balance = b;
}

float BankAccount::getBalance()
{
	return balance;
}
