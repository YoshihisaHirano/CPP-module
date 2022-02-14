#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
	return;
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::Fixed(const int src) 
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = src << this->_bitsNo;
	return;
}

Fixed::Fixed(const float src) 
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = (int)(roundf(src * (1 << this->_bitsNo)));
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed& Fixed::operator=(const Fixed& rhs) 
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();

	return *this;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_rawBits / (float)(1 << this->_bitsNo));
}

int Fixed::toInt(void) const
{
	return (this->_rawBits >> this->_bitsNo);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void Fixed::setRawBits(int const raw) 
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;
	return;
}

std::ostream & operator<<(std::ostream & o, Fixed const& var)
{
	o << var.toFloat();
	return (o);
}
