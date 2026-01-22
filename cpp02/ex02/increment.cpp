#include "Fixed.hpp"

Fixed &Fixed::operator++(void)
{
	_fixed_point_nbr++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp;

	temp = *this;
	_fixed_point_nbr++;
	return temp;
}

Fixed &Fixed::operator--(void)
{
	_fixed_point_nbr--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp;

	temp = *this;
	_fixed_point_nbr--;
	return temp;
}