//You are building a class for a game engine that requires 
//you to keep track of the number of objects currently in the game 
//world.
//How would you use a static member variable to maintain this count 
//across all instances of the class?

#include <iostream>
using namespace std;
class Game
{
	public:
	static int numObj;
	Game()
	{
		numObj++;
	}
	~Game()
	{
		numObj--;
	}
	static int getNumObj()
	{
		return numObj;
	}
};
int Game::numObj;
int main()
{
	Game obj1, obj2, obj3;
	obj1.~Game();
	obj3.~Game();
	cout<<"Current number of objects is "<<Game::numObj;
	return 0;
}
