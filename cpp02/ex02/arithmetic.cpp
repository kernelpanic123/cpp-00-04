#include "Fixed.hpp"

Fixed Fixed::operator+ (Fixed &other)
{
	return _fixed_point_nbr + other._fixed_point_nbr;
}