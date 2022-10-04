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

		Fixed operator++(int);
		Fixed operator--(int);
		Fixed &operator++();
		Fixed &operator--();

		bool operator>(const Fixed &fixed);
		bool operator<(const Fixed &fixed);
		bool operator!=(const Fixed &fixed);
		bool operator<=(const Fixed &fixed);
		bool operator>=(const Fixed &fixed);
		bool operator==(const Fixed &fixed);

		Fixed operator+(const Fixed &fixed);
		Fixed operator-(const Fixed &fixed);
		Fixed operator*(const Fixed &fixed);
		Fixed operator/(const Fixed &fixed);

		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &min(Fixed const &a, Fixed const &b);
		static const Fixed &max(Fixed const &a, Fixed const &b);

		~Fixed();
	private:
		int _numberValue;
		static const int _bitValue = 8;
};

std::ostream& operator<<(std::ostream & os, Fixed const & i);

#endif