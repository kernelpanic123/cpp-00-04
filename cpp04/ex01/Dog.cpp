#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "default constructor dog called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(std::string name) : Animal(name)
{

}

Dog::Dog(const Dog &other) : Animal(other)
{

}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "the dog goes woooof woof" << std::endl;
}

Dog::~Dog()
{
	std::cout << "default destructor dog called" << std::endl;
}