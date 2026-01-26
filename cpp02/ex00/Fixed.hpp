#ifndef FIXED_H
# define FIXED_H

#include <string>
#include <iostream>

class Fixed
{
	private:

		int _fixed_point_nbr;
		static const int fraction = 8;

	public:
		Fixed();
		Fixed(Fixed const &src);
		Fixed &operator=( const Fixed &src);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );


};

#endif