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

Fixed::Fixed(const float num)
{
	_numberValue = roundf(num *(1 << _bitValue));
}

Fixed::Fixed(const int num) : _numberValue(num << _bitValue)
{
}


float Fixed::toFloat( void ) const
{
	return ((float)_numberValue / (1 << _bitValue));
}

int Fixed::toInt( void ) const
{
	return (_numberValue >> _bitValue);	
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

std::ostream& operator<<(std::ostream & os, Fixed const & i) {
	return(os << (i.toFloat()));
}

Fixed Fixed::operator++(int){
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed Fixed::operator--(int){
	Fixed temp = *this;
	--*this;
	return temp;
}

Fixed &Fixed::operator++(){
	_numberValue++;
	return *this;
}

Fixed &Fixed::operator--(){
	_numberValue--;
	return *this;
}

bool Fixed::operator>(const Fixed &fixed){
	return this->_numberValue > fixed._numberValue;
}
bool Fixed::operator<(const Fixed &fixed){
	return this->_numberValue < fixed._numberValue;
}
bool Fixed::operator!=(const Fixed &fixed){
	return this->_numberValue != fixed._numberValue;
}
bool Fixed::operator<=(const Fixed &fixed){
	return this->_numberValue <= fixed._numberValue;
}
bool Fixed::operator>=(const Fixed &fixed){
	return this->_numberValue >= fixed._numberValue;
}
bool Fixed::operator==(const Fixed &fixed){
	return this->_numberValue == fixed._numberValue;
}

Fixed Fixed::operator+(const Fixed &fixed){
	Fixed temp;
	temp.setRawBits(_numberValue + fixed._numberValue);
	return (temp);
}
Fixed Fixed::operator-(const Fixed &fixed){
	Fixed temp;
	temp.setRawBits(_numberValue - fixed._numberValue);
	return (temp);
}
Fixed Fixed::operator*(const Fixed &fixed){
	Fixed temp;
	temp.setRawBits((_numberValue * fixed._numberValue) >> 8);
	return (temp);
}
Fixed Fixed::operator/(const Fixed &fixed){
	Fixed temp;
	temp.setRawBits(temp.toFloat() / fixed.toFloat());
	return (temp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
	return (a._numberValue < b._numberValue ? a : b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b){
	return (a._numberValue > b._numberValue ? a : b);
}
const Fixed &Fixed::min(Fixed const &a, Fixed const &b){
	return (a._numberValue < b._numberValue ? a : b);
}
const Fixed &Fixed::max(Fixed const &a, Fixed const &b){
	return (a._numberValue > b._numberValue ? a : b);
}

Fixed::~Fixed()
{
	std::cout<< "Destructor called" << std::endl;
}
