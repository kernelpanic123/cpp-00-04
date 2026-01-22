#include "Fixed.hpp"

bool Fixed::operator== (const Fixed &other) const
{
	return this->_fixed_point_nbr == other._fixed_point_nbr;
}

bool Fixed::operator!= (const Fixed &other) const
{
	return this->_fixed_point_nbr != other._fixed_point_nbr;
}

bool Fixed::operator> (const Fixed &other) const
{
	return this->_fixed_point_nbr > other._fixed_point_nbr;
}

bool Fixed::operator< (const Fixed &other) const
{
	return this->_fixed_point_nbr < other._fixed_point_nbr;
}

bool Fixed::operator>= (const Fixed &other) const
{
	return this->_fixed_point_nbr >= other._fixed_point_nbr;
}

bool Fixed::operator<= (const Fixed &other) const
{
	return this->_fixed_point_nbr <= other._fixed_point_nbr;
}