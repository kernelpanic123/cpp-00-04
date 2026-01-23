#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{

}
ClapTrap::~ClapTrap()
{
	
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _hit_points(10), _energy_points(10), _attack_points(0)
{

}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		_hit_points = other._hit_points;
		_energy_points = other._energy_points;
		_attack_points = other._attack_points;
	}
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}

void ClapTrap::attack(const std::string &target)
{
	if (_hit_points <= 0)
	{
		std::cout << "no HP left...." << std::endl;
		return ;
	}
	else if (_energy_points <= 0)
	{
		std::cout << "no MANA left...." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing " << _attack_points << " points of damage !" << std::endl;
	_energy_points--;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points <= 0)
	{
		std::cout << "no MANA left...." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _Name << " healed " << amount << std::endl;
	_energy_points--;
	_hit_points = _hit_points + amount;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _Name << " took " << amount << " of damage!" << std::endl;
}