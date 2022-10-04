#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed{
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed& operator = (const Fixed& f);
		Fixed(const float num);
		Fixed(const int num);

		float toFloat( void ) const;
		int toInt( void ) const;

		int getRawBits(void) const;
		void setRawBits( int const raw );
		~Fixed();
	private:
		int _numberValue;
		static const int _bitValue = 8;
};

std::ostream& operator<<(std::ostream & os, Fixed const & i);

#endif