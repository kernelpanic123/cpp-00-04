#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	
}

WrongCat::WrongCat(std::string name) : WrongAnimal(name)
{

}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{

}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		WrongAnimal::operator=(other);
	}
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "the WrongCat goes meow moewww" << std::endl;
}

WrongCat::~WrongCat()
{

}