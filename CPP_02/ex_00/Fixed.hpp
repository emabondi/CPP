#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed{
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed& operator = (const Fixed& f);
		int getRawBits(void) const;
		void setRawBits( int const raw );
		~Fixed();
	private:
		int _numberValue;
		static const int _bitValue = 8;
};

#endif