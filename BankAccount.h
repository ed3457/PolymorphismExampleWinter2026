#pragma once
#include <string>
using namespace std; 
class BankAccount
{
private:
	float balance; 

public:

	virtual void withdraw(float a);// late binding 

	void deposit(float a); 

	BankAccount();
	BankAccount(float b);

	float getBalance();

	BankAccount operator -(float num); 

	BankAccount operator + (const BankAccount& ba); 
};

