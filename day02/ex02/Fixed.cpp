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

	return (*this);
}

Fixed Fixed::operator+(Fixed const& rhs) 
{
	return (Fixed(this->_rawBits + rhs.getRawBits()));
}

Fixed Fixed::operator-(Fixed const& rhs) 
{
	return (Fixed(this->_rawBits - rhs.getRawBits()));
}

Fixed Fixed::operator/(Fixed const& rhs) 
{
	Fixed	res;

	res.setRawBits(this->_rawBits * (1 << this->_bitsNo) / rhs.getRawBits());
	return res;
}

Fixed Fixed::operator*(Fixed const& rhs) 
{
	Fixed	res;

	res.setRawBits(this->_rawBits * rhs.getRawBits() / (1 << this->_bitsNo));
	return res;
}

bool Fixed::operator==(Fixed const& rhs) const
{
	return (this->_rawBits == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const& rhs) const
{
	return (this->_rawBits != rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const& rhs) const
{
	return (this->_rawBits >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const& rhs) const
{
	return (this->_rawBits <= rhs.getRawBits());
}

bool Fixed::operator>(Fixed const& rhs) const
{
	return (this->_rawBits > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const& rhs) const
{
	return (this->_rawBits < rhs.getRawBits());
}

Fixed& Fixed::min(Fixed &f1, Fixed &f2) 
{
	return ((f1 < f2) ? f1 : f2);
}

const Fixed& Fixed::min(Fixed const& f1, Fixed const& f2) 
{
	return ((f1 < f2) ? f1 : f2);
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2) 
{
	return ((f1 > f2) ? f1 : f2);
}

const Fixed& Fixed::max(Fixed const& f1, Fixed const& f2) 
{
	return ((f1 > f2) ? f1 : f2);
}

Fixed& Fixed::operator++() 
{
	this->_rawBits += 1;
	return (*this);
}

Fixed Fixed::operator++(int) 
{
	Fixed	tmp(*this);

	this->_rawBits += 1;
	return (tmp);
}

Fixed& Fixed::operator--() 
{
	this->_rawBits -= 1;
	return (*this);
}

Fixed Fixed::operator--(int) 
{
	Fixed	tmp(*this);

	this->_rawBits -= 1;
	return (tmp);
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
	return this->_rawBits;
}

void Fixed::setRawBits(int const raw) 
{
	this->_rawBits = raw;
	return;
}

float Fixed::_getEpsilon(void) const
{
	return (1.0 / (float)(1 << this->_bitsNo));
}

std::ostream & operator<<(std::ostream & o, Fixed const& var)
{
	o << var.toFloat();
	return (o);
}
