#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "default constructor cat called" << std::endl;
	small_brain = new Brain;
	this->_type = "Cat";
}

Cat::Cat(std::string name) : Animal(name)
{

}

Cat::Cat(const Cat &other) : Animal(other)
{
	this->small_brain = new Brain;
	*this->small_brain = *other.small_brain;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete this->small_brain;
		this->small_brain = new Brain;
		*this->small_brain = *other.small_brain;
	}
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "the cat goes meow moewww" << std::endl;
}

Cat::~Cat()
{
	delete small_brain;
	std::cout << "default destructor cat called" << std::endl;
}