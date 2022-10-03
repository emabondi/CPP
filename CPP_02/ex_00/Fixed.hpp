#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>

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