#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap clanker_1 = ClapTrap("robot");
	ClapTrap clanker_2 = ClapTrap("waloud");

	clanker_1.attack("Walid");
	clanker_2.takeDamage(20);
	clanker_1.beRepaired(10);

}