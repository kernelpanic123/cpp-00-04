#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon(std::string weapon);
		~Weapon(void);
		const std::string &get_Type();
		void setType(std::string type);
};

#endif