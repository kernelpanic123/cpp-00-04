#include "Dog.hpp"

Dog::Dog() : Animal()
{
	
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

}