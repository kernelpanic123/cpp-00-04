#include "Zombie.hpp"

Zombie::Zombie(void)
{

}
Zombie::Zombie(std::string name)
{
	std::cout << name << " zombie from heap created" << std::endl;
	_name = name;
}
Zombie::~Zombie(void)
{
	std::cout << _name << " dead" << std::endl;
}
void Zombie::set_name(std::string name)
{
	_name = name;
}
std::string  Zombie::get_name(void)
{
	return _name;
}
void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
