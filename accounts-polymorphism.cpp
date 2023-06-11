/*You are working on a banking application and need to implement a system that manages different types of 
accounts: SavingsAccount and CheckingAccount. Both account types inherit from a base class called Account. 
The Account class has a pure virtual function called calculateInterest() that calculates and returns the 
interest earned by the account.Each derived class must implement this function according 
to its specific rules.

Your task is to write a program that demonstrates the use of polymorphism.Create a function called 
displayInterest() that takes a pointer to the base class Account as a parameter and displays the interest 
earned by that account. The displayInterest() function should be able to handle both 
SavingsAccount and CheckingAccount objects polymorphically.

Write a code ensuring that the displayInterest() function correctly utilizes polymorphism and displays 
the interest earned by each account type.
*/
#include <iostream>
using namespace std;
class Account
{
	public:
		
		virtual double calculateInterest(){
		}
};
class SavingsAccount:public Account
{
	public:
		double balance;
		double interest;
		SavingsAccount(double b, double i)
		{
			balance = b;
			interest = i;
		}
		double calculateInterest()
		{
			return balance * interest;
		}
};
class CheckingAccount:public Account
{
	public:
		double balance;
		double fee;
		CheckingAccount(double bl, double fe)
		{
			balance = bl;
			fee = fe;
		}
		double calculateInterest()
		{
			return balance * fee;
		}
};
void displayInterest(Account* acc)
{
	cout<<"Interest earn by the bank: "<<acc->calculateInterest()<<endl;
}
int main()
{
	SavingsAccount savings(12093.874, 0.05);
	CheckingAccount checking(12093.874, 0.001);
	displayInterest(&savings);
	displayInterest(&checking);
	return 0;
}
