#ifndef FIXED_H
# define FIXED_H

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	private:

		int _fixed_point_nbr;
		static const int _fraction = 8;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(Fixed const &src);
		Fixed &operator=( const Fixed &src);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		int toInt( void ) const;
		float toFloat( void ) const;


};
std::ostream &operator << (std::ostream &out, const Fixed &c);

#endif