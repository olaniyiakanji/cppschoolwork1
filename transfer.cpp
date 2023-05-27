//You are building a class for a bank account management system,
//and you want to implement a function that 
//transfers funds between two accounts. 
//How would you implement this function as a friend function?
#include <iostream>
#include <string>
using namespace std;
class IsBankAccount;
class ZiraatBankAccount
{
	public:
	string name;
	double balance;

	BankAccount(string n, double b)	
	{
		name = n;
		balance = b;
	}
	friend void transfer(ZiraatBankAccount, IsBankAccount, double );
	
};

class IsBankAccount
{
	public:
	string name;
	double balance;
	
	BankAccount(string n, double b)	
	{
		name = n;
		balance = b;
	}
	friend void transfer(ZiraatBankAccount, IsBankAccount, double);
	
	
};
void transfer(ZiraatBankAccount sender, IsBankAccount receiver, double amount)
	{
		if(sender.balance >= amount)
		{
			sender.balance -= amount;
			receiver.balance += amount;
			cout<<"Dear Mr. "<<sender.name<<" You have successfully transfered ";
			cout<<amount<<" to "<<receiver.name<<endl;
		}
		else
		{
			cout<<"Insufficient funds"<<endl;
		}
	}
int main()
{
	ZiraatBankAccount ac1;
	IsBankAccount ac2;
	ac1.name = "Hi";
	ac2.name = "Hi";
	ac1.balance = 5469.2;
	ac2.balance = 569.2;
	
	transfer(ac1, ac2, 1000);
	return 0;
}
