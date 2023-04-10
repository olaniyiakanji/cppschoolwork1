#include <iostream>
using namespace std;

void menu(); //main menu
int add(int x, int y); // for adding two numbers x and y
int sub(int x, int y);// for subtracting two numbers x and y

int main()
{
	menu(); //function call (calling the menu function)
	return 0;
}

void menu()
{
	cout<<"1 for add\n2 for subtract\n3 to quit"<<endl;
	int choice;
	cin>>choice;
	if (choice == 1)
	{
		int x;
		int y;
		cout<<"Enter first number"<<endl;
		cin>>x;
		cout<<"Enter the second number"<<endl;
		cin>>y;
		
		cout<<"X + y = "<<add(x, y)<<endl;
	}
}
int add(int x, int y)
{
	return x + y;
}
