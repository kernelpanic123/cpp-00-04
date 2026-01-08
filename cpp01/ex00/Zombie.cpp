#include "Zombie.hpp"

Zombie::Zombie(void)
{

}
Zombie::~Zombie(void)
{
	std::cout << this->_name << " dead" << std::endl;
}
void Zombie::set_name(std::string tmp)
{
	this->_name = tmp;
}
std::string Zombie::get_name(void)
{
	return this->_name;
}

void Zombie::announce(void)
{
	std::string input = "Francis";
	set_name(input);
	std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;

}