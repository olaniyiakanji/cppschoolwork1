//You are building a class for a bank account management system. 
//How would you use a static member variable to keep track 
//of the total number of accounts created so far?

#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
	static int totalAccountsCreated;
	string name;
	double balanceDeposit;	
	
	public:
//this is constructor to create an account using object 
//of the class BankAccount
	
	BankAccount(string n, double bd)
	{
		name = n;
		balanceDeposit = bd;
		totalAccountsCreated++;	
	}
	static int getTotalAccountsCreated()
	{
		return totalAccountsCreated;
	}
};
int BankAccount::totalAccountsCreated; 
int main()
{
	BankAccount ac1("Musa", 100);
	BankAccount ac2("Zaid", 1000);
	BankAccount ac3("Ayshe", 10000);
	BankAccount ac4("Emir", 10000);
	BankAccount ac5("Berkay", 10);
	cout<<"total accounts are "<<BankAccount::getTotalAccountsCreated();
	return 0;
}
















