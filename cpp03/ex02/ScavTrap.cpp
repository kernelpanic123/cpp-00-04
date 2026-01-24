#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_points = 20;
	std::cout << "scavtrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_points = 20;
	std::cout << "scavtrap constructer called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{

}
ScavTrap &ScavTrap::operator= (const ScavTrap &other)
{
	std::cout << "scavtrap operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "scavtrap destructor called" << std::endl;
}
void ScavTrap::guardGate()
{
	std::cout << _Name << " is now in gate keeper mode !" << std::endl;
}
void ScavTrap::attack(const std::string &target)
{
	if (_hit_points <= 0)
	{
		std::cout << "no HP left...." << std::endl;
		return;
	}
	else if (_energy_points <= 0)
	{
		std::cout << "no MANA left...." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _Name << " attacks " << target << ", causing " << _attack_points << " points of damage !" << std::endl;
	_energy_points--;
}