#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	//referece to class
	{
	Weapon club = Weapon("stick");
	HumanA bob("Bob", club); //club = arme = type = donc le baton
	bob.attack();
	club.setType("gun");
	bob.attack();
	}
	//pointeur to class car il est null au debut
	{
	Weapon club = Weapon("baton booste");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("vandal");
	jim.attack();
	}

	return 0;
}