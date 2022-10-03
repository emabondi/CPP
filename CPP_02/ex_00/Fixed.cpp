#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout<< "Default constructor called" << std::endl;
	_numberValue = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout<< "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed& Fixed::operator=(const Fixed& f)
{
	std::cout<< "Copy assignment operator called" << std::endl;
	_numberValue = f.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout<< "getRawBits member function called" << std::endl;
	return(_numberValue);
}

void Fixed::setRawBits( int const raw )
{
	std::cout<< "setRawBits member function called" << std::endl;
	_numberValue = raw;
}

Fixed::~Fixed()
{
	std::cout<< "Destructor called" << std::endl;
}