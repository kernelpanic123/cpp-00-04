#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "default constructor animal called" << std::endl;
}
Animal::Animal(std::string name) : _type(name)
{

}

std::string Animal::getType(void) const
{
	return _type;
}

Animal::Animal(const Animal &other)
{
	*this = other;
}
Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal sound doesn't specified yet !" << std::endl;
}

Animal::~Animal()
{
	std::cout << "default destructor animal called" << std::endl;
}
