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

		bool operator== (const Fixed &other) const;
		bool operator!= (const Fixed &other) const;
		bool operator> (const Fixed &other) const;
		bool operator< (const Fixed &other) const;
		bool operator>= (const Fixed &other) const;
		bool operator<= (const Fixed &other) const;

		Fixed operator + (const Fixed &other) const;
		Fixed operator - (const Fixed &other) const;
		Fixed operator * (const Fixed &other) const;
		Fixed operator / (const Fixed &other) const;

		Fixed & operator ++ (void);
		Fixed operator ++(int);
		Fixed & operator -- (void);
		Fixed operator --(int);

		static Fixed &min(Fixed &x, Fixed &y);
		static Fixed &max(Fixed &x, Fixed &y);
		static const Fixed &min(const Fixed &x, const Fixed &y);
		static const Fixed &max(const Fixed &x, const Fixed &y);


};
std::ostream &operator << (std::ostream &out, const Fixed &c);

#endif