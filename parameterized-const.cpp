//Suppose you are building a class for a car dealership
// that will represent a car in their inventory. 
//You want to be able to create instances of this class 
//with different sets of parameters, 
//such as the make, model, year, and price of the car. 
//To accomplish this, 
//you will create a parameterized constructor that takes
// these parameters as arguments and initializes 
//the object's data members accordingly.
#include <iostream>
#include <string>
using namespace std;
class car_dealership
{
	public:
	string make;
	string model;
	int year;
	int price;
	car_dealership()
	{
		make = "";
		model = "";
		year = 0;
		price = 0;
	}
	car_dealership(string m, string md, int y, int p)
	{
		make = m;
	 	model = md;
	 	year = y ;
	 	price = p;
		}
	car_dealership(string mk, string ml)
	{
		make = mk;
		model = ml;
		}	
};
using namespace std;

int main()
{
	car_dealership car1(" Mazda ", " RX7 ", 2020, 30000);
	car_dealership car2(" Mazda ", " RX7 ");
	cout<<"Car with complete information"<<endl;
	cout<<"Make: "<<car1.make;
	cout<<"Model: "<<car1.model;
	cout<<"Year: "<<car1.year;
	cout<<"Price: "<<car1.price;
	cout<<endl;
	cout<<"........................."<<endl;
	cout<<endl;
	cout<<"Car with incomplete information"<<endl;
	cout<<"Make: "<<car2.make;
	cout<<"Model: "<<car2.model;
	return 0;
}

