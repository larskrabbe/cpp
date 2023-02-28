#include	<iostream>
#include	"Fixed.hpp"

int main()
{
	Fixed	data;

	std::cout << data._getRawBits() << std::endl;
	data._setRawBits(100);
	std::cout << data._getRawBits() << std::endl;
}