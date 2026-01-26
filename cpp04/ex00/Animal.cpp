#include "Animal.hpp"

Animal::Animal()
{

}
Animal::Animal(const Animal &other)
{
	*this = other;
}
Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}