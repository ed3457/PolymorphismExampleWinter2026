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

BankAccount BankAccount::operator-(float num)
{   
	withdraw(num);
	return BankAccount(num);
}

BankAccount BankAccount::operator+(const BankAccount& ba)
{   
	return BankAccount(balance+ ba.balance);
}

BankAccount BankAccount::operator*(float rate)
{    
	return BankAccount(balance*rate);
}
