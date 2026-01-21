#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point_nbr(0)
{

}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed_point_nbr = value << _fraction;
}
Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed_point_nbr = roundf(value * (1 << _fraction)); //1 << _fraction = 256
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
	return (_fixed_point_nbr);
}

void Fixed::setRawBits(int const raw)
{
	_fixed_point_nbr = raw;
}
int Fixed::toInt(void) const
{
	return _fixed_point_nbr >> _fraction; //shift 8 bits droite
}

float Fixed::toFloat(void) const
{
	return (float)_fixed_point_nbr / (float)(1 << _fraction);
}

std::ostream &operator << (std::ostream &out, const Fixed &c)
{
	out << c.toFloat();
	return out;
}