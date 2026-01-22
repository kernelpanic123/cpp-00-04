#include "Fixed.hpp"

Fixed Fixed::operator+ (const Fixed &other) const
{
	Fixed result_class;

	int sum = this->_fixed_point_nbr + other.getRawBits();

	result_class.setRawBits(sum);

	return result_class;
}

Fixed Fixed::operator- (const Fixed &other) const
{
	Fixed result_class;

	int sum = this->_fixed_point_nbr - other.getRawBits();

	result_class.setRawBits(sum);

	return result_class;
}

Fixed Fixed::operator* (const Fixed &other) const
{
	Fixed result_class;

	int sum = this->_fixed_point_nbr * other.getRawBits();

	sum = sum >> 8;

	result_class.setRawBits(sum);

	return result_class;

}

Fixed Fixed::operator/ (const Fixed &other) const
{
	Fixed result_class;

	int sum = this->_fixed_point_nbr;

	sum = sum << 8;

	sum = sum / other.getRawBits();

	result_class.setRawBits(sum);

	return result_class;
}