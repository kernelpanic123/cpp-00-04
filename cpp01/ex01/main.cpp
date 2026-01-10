#include "Zombie.hpp"

int main(void)
{
	Zombie* rotten;

	rotten = zombieHorde(5, "Patrick");

	for (int i = 0; i < 5; i++)
	{
		rotten[i].announce();
	}
	delete [] rotten;
}