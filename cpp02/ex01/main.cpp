#include	<iostream>
#include	"Fixed.hpp"

int main()
{
	{
		Fixed	data;
		std::cout << data._getRawBits() << std::endl;
		data._setRawBits(100);
		std::cout << data._getRawBits() << std::endl;
	}
	{
		Fixed	data(-20.4f);
		std::cout << data._toFloat() << std::endl;
		data = -42;
		std::cout << data._toInt() << std::endl;
		std::cout << data << std::endl;
	}
}