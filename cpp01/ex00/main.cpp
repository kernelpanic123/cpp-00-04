#include "Zombie.hpp"

int main(void)
{
	Zombie* heapzombie = newZombie("Marco");
	heapzombie->announce();
	delete heapzombie; //destructeur appele
	randomChump("Patrick");
	//destructeur automatiquement appele
}