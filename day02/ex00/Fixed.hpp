#ifndef __FIXED_H__
#define __FIXED_H__

class Fixed
{
private:
	int		_rawBits;

	static int const _bitsNo = 8;

public:
	Fixed();
	Fixed(const Fixed& src);
	~Fixed();
	Fixed& operator=(const Fixed& rhs);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif