#ifndef __FIXED_H__
#define __FIXED_H__
#include <iostream>

class Fixed
{
private:
	int		_rawBits;

	static int const _bitsNo = 8;

public:
	Fixed();
	Fixed(const Fixed& src);
	Fixed(const int src);
	Fixed(const float src);

	~Fixed();
	Fixed& operator=(const Fixed& rhs);

	float toFloat( void ) const;
	int toInt( void ) const;

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

std::ostream & operator<<(std::ostream & o, Fixed const& var);

#endif