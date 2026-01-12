#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club) : shotgun(club), _name(name)
{

}
HumanA::~HumanA()
{

}

void HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << shotgun.get_Type() << std::endl;
}