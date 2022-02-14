#include "Fixed.hpp"
#include <iostream>

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
