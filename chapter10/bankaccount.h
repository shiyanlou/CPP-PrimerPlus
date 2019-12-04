// filename bankaccount.h
#ifndef __BANKACCOUNT_H__
#define __BANKACCOUNT_H__
#include<string>
class BankAccount
{
	private:
	std:: string name;
	std:: string acctnum;
	double balance;
	public:
	BankAccount(const std::string&client,
	const std:: string &num,double bal=0.0);
	void show()const;
	void deposit(double cash);
	void withdraw(double cash);
};
#endif