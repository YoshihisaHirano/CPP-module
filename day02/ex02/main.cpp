#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	Fixed const c(Fixed(10.5f) / Fixed( 2 ));
	std::cout << c << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed const d(90.24368f);
	Fixed const e(100.76f);
	std::cout << "d: " << d.getRawBits()<< std::endl;
	std::cout << "e: " << e.getRawBits() << std::endl;

	return 0;
}