#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : _type(weapon)
{
	
}
Weapon::~Weapon()
{

}
const std::string &Weapon::get_Type(void)
{
	return _type;
}
void Weapon::setType(std::string type)
{
	_type = type;
}
