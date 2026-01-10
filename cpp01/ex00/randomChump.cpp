#include "Zombie.hpp"

void randomChump( std::string name)
{
	Zombie stackzombie;

	stackzombie.set_name(name);
	std::cout << stackzombie.get_name() << " zombie from stack created" << std::endl;
	stackzombie.announce();
}