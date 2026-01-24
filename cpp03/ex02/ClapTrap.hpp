#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap
{
	protected:

		std::string _Name;
		int _hit_points;
		int _energy_points;
		int _attack_points;

	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &other);
		ClapTrap &operator =(const ClapTrap &other);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ClapTrap();
};


#endif