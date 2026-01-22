#include "Fixed.hpp"

Fixed &Fixed::min(Fixed &x, Fixed &y)
{
	if (x <= y)
		return x;
	return y;
}
const Fixed &Fixed::min(const Fixed &x, const Fixed &y)
{
	if (x <= y)
		return x;
	return y;
}
Fixed &Fixed::max(Fixed &x, Fixed &y)
{
	if (x >= y)
		return x;
	return y;
}
const Fixed &Fixed::max(const Fixed &x, const Fixed &y)
{
	if (x >= y)
		return x;
	return y;
}