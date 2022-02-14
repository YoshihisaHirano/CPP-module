#ifndef __FIXED_H__
#define __FIXED_H__
#include <iostream>

class Fixed
{
private:
	int		_rawBits;
	static	int const _bitsNo = 8;

	float	_getEpsilon( void ) const;

public:
	Fixed();
	Fixed(const Fixed& src);
	Fixed(const int src);
	Fixed(const float src);

	~Fixed();
	Fixed&	operator=(const Fixed& rhs);

	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);

	Fixed	operator+(Fixed const& rhs);
	Fixed	operator-(Fixed const& rhs);
	Fixed	operator*(Fixed const& rhs);
	Fixed	operator/(Fixed const& rhs);

	bool	operator==(Fixed const& rhs) const;
	bool	operator!=(Fixed const& rhs) const;
	bool	operator>=(Fixed const& rhs) const;
	bool	operator<=(Fixed const& rhs) const;
	bool	operator>(Fixed const& rhs) const;
	bool	operator<(Fixed const& rhs) const;

	static Fixed&	min(Fixed &f1, Fixed &f2);
	static const	Fixed&	min(Fixed const& f1, Fixed const& f2);
	static Fixed&	max(Fixed &f1, Fixed &f2);
	static const 	Fixed&	max(Fixed const& f1, Fixed const& f2);

	float	toFloat( void ) const;
	int		toInt( void ) const;

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

std::ostream & operator<<(std::ostream & o, Fixed const& var);

#endif