#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{

}
WrongAnimal::WrongAnimal(std::string name) : _type(name)
{

}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound doesn't specified yet !" << std::endl;
}

WrongAnimal::~WrongAnimal()
{

}