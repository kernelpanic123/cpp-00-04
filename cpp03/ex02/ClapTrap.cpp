#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name("pathfinder"), _hit_points(10), _energy_points(10), _attack_points(0)
{
	std::cout << "claptrap default constructor called" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "claptrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _hit_points(10), _energy_points(10), _attack_points(0)
{
	std::cout << "claptrap assign list called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "claptrap operator called" << std::endl;
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
	std::cout << "claptrap copy called" << std::endl;
	*this = other;
}

void ClapTrap::attack(const std::string &target)
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
	if (_hit_points <= 0)
	{
		std::cout << _Name << " not enough HP..." << std::endl;
		return;
	}
	std::cout << _Name << " took " << amount << " of damage!" << std::endl;
	_hit_points = _hit_points - amount;

	if (_hit_points < 0)
		_hit_points = 0;
}