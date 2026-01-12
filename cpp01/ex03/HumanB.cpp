#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), shotgun(NULL) 
{
	
}
HumanB::~HumanB()
{

}
void HumanB::attack(void)
{
	std::cout << _name << " attacks with their " << shotgun->get_Type() << std::endl; //fleche car pointeur
}
void HumanB::setWeapon(Weapon &club)
{
	this->shotgun = &club;//pointeur de shotgun vers la valeur de l'arme;
}