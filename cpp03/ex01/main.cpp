#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	ScavTrap clanker_1 = ScavTrap("wall-e");
	ScavTrap clanker_2 = ScavTrap("EvE");
	ScavTrap clanker_3 = clanker_1;

	clanker_1.guardGate();
	clanker_2.beRepaired(5);
	clanker_1.attack("robocop");

}