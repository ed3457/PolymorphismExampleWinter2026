#pragma once
#include <string>
using namespace std; 
class BankAccount
{
private:
	float balance; 

public:

	void withdraw(float a);

	void deposit(float a); 

	BankAccount();
	BankAccount(float b);
};

