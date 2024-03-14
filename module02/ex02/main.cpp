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
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}

// int main(void)
// {
// 	Fixed		a;
// 	Fixed const	b(Fixed(5.05f) * Fixed(2));
// 	Fixed		q(10);
// 	Fixed		inc;

// 	std::cout << "a: " << a << std::endl;
// 	std::cout << "++a: " << ++a << std::endl;
// 	inc = ++a;
// 	std::cout << "inc = ++a: " << inc << std::endl;
// 	std::cout << "a: " << a << std::endl;
// 	std::cout << "a++: " << a++ << std::endl;
// 	std::cout << "a after a++: " << a << std::endl;
// 	std::cout << "b: " << b << std::endl;
// 	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
// 	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
// 	std::cout << "q: " << q << std::endl;
// 	std::cout << "q+q+q+q: " << q + q + q + q << std::endl;
// 	q = q + a;
// 	std::cout << "q = q + a: " << q << std::endl;
// 	std::cout << "a * q: " << a * q << std::endl;

// 	return (0);
// }
