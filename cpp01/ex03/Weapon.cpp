#include "Weapon.hpp"

Weapon::Weapon()
{

}
Weapon::~Weapon()
{

}
const std::string &Weapon::get_Type(void)
{
	return _type;
}
void Weapon::set_type(std::string type)
{
	_type = type;
}
