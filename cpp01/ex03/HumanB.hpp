#ifndef HUMANB_H
#define HUMANB_H

#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon *shotgun;
		

	public:
		HumanB(std::string name);
		~HumanB();
		void attack(void);
		void setWeapon(Weapon &club);
};

#endif