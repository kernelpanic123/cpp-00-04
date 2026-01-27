#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "default constructor cat called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(std::string name) : Animal(name)
{

}

Cat::Cat(const Cat &other) : Animal(other)
{

}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "the cat goes meow moewww" << std::endl;
}

Cat::~Cat()
{
	std::cout << "default destructor cat called" << std::endl;
}