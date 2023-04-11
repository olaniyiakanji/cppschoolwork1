#include <iostream>
using namespace std;

int main()
{
//Write a program that prompts the user to enter a number 
//and then checks whether the number is even or odd using an if-else statement.
//solution
	cout<<"enter an integer number"<<endl;
	int num; //this is number from the user
	cin>>num;
	if(num%2 == 0)
	{
		cout<<"Even";
	}
	else
	{
		cout<<"odd";
	}


//Write a program that uses a for loop to print out the first ten numbers in the Fibonacci sequence.
//example of the sequence. 0, 1, 1, 2,  3, 5, 8, 13, 21, 
// num1 = 2, num2 = 3, num3 = num1 + num2

int num1 = 0;
int num2 = 1;
int num3;
cout<<"Fibonacci Series Sequence: ";

for(int i = 1; i <= 10; i++)
{
	cout<<num1<<" ";
	num3 = num1 + num2;
	num1 = num2;
	num2 = num3;
}
	return 0;
}

