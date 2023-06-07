/*
You are designing a program to represent the different types of vehicles 
that a car dealership sells. Each vehicle can be either 
a car, a truck, or an SUV. Additionally, each vehicle has a make, model, year, 
and price. How could you use an enumerator in C++ to represent the 
different vehicle types?
Hint: You can define an enum for the VehicleType data type, 
with three possible values: Car, Truck, and SUV.
*/
#include <iostream>
#include <string>
using namespace std;

enum VehicleType{
	car, truck, SUV	
};

struct vehicle{
	string make;
	string model;
	int year; 
	int price;
	VehicleType vt;
};
int main()
{
	vehicle car1 = {"Honda ", "Civic ", 2000, 300, SUV};
	vehicle truck1 = {"Honda ", "Civic ", 2000, 300, truck};
	vehicle SUV1 = {"Honda ", "Civic ", 2000, 300, SUV};
	cout<<"Car: "<<car1.make<<" "<<car1.model<<" "<<car1.year<<" "<<car1.price<<" Vehichle Type "<<car1.vt<<endl;
	return 0;
}
