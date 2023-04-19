#include	<iostream>
#include	"Fixed.hpp"

int main()
{
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;
	std::cout << a._getRawBits() << std::endl;
	std::cout << b._getRawBits() << std::endl;
	std::cout << c._getRawBits() << std::endl;
}