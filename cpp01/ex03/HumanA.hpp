#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon shotgun;
		std::string _name;

	public:
		HumanA();
		~HumanA();
		void attack(void);
};

#endif