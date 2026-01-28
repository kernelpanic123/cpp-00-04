#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "default constructor dog called" << std::endl;
	big_brain = new Brain;
	this->_type = "Dog";
}

Dog::Dog(std::string name) : Animal(name)
{

}

Dog::Dog(const Dog &other) : Animal(other)
{
	big_brain = new Brain;
	*big_brain = *other.big_brain;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete this->big_brain;
		this->big_brain = new Brain;
		*this->big_brain = *other.big_brain;
	}
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "the dog goes woooof woof" << std::endl;
}

Dog::~Dog()
{
	delete big_brain;
	std::cout << "default destructor dog called" << std::endl;
}