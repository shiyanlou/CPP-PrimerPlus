// filename bankaccount.cpp
#include<iostream>
#include"bankaccount.h"
BankAccount::BankAccount(const std::string&client,
const std::string&num,double bal)
{
	name=client;
	acctnum=num;
	balance=bal;
}
void BankAccount::show()const
{
	using std::cout;
	using std::endl;
	cout<<"Client: "<<name<<endl;
	cout<<"Account Number: "<<acctnum<<endl;
	cout<<"Balance: "<<balance<<endl;
}
void BankAccount::deposit(double cash)
{
	if(cash>=0)
		balance+=cash;
	else
		std::cout<<"Illegal transaction attempted";
}
void BankAccount::withdraw(double cash)
{
	if(cash<0)
		std::cout<<"Illegal transaction attempted";
	else if (cash<=balance)
		balance-=cash;
	else
		std::cout<<"Request denied due to insufficient funds.\n";
}