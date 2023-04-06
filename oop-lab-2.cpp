#include <iostream>
using namespace std;

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4; 
	
	//ask the user to enter a number
	int x;
	cout<<"Enter a integer number between 1 and 4: ";
	cin>>x; //this will get the user's input (number)
	
	switch (x)
	{
		case 1:
			cout<<a<<" is less than "<<x<<endl; //this will print 10 is less than 12
			break;
		case 2:
		
			cout<<b<<" is less than "<<x<<endl; //this will print 15 is less than 12
		
			break;
		case 3:
		
			cout<<c<<" is less than "<<x<<endl; //this will print 15 is less than 12
		
			break;
		case 4:
			
			cout<<d<<" is less than "<<x<<endl; //this will print 15 is less than 12
		
			break;
		default:
			cout<<"Out of range. ";
	}
return 0;
}
