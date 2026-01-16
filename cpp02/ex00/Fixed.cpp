#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point_nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
Fixed& Fixed::operator=( const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src) 
		_fixed_point_nbr = src.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixed_point_nbr);
}

void Fixed::setRawBits(int const raw)
{
	_fixed_point_nbr = raw;
}


