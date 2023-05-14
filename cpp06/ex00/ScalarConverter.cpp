
#include	<string>
#include	<iostream>
#include	"ScalarConverter.hpp"

void	ScalarConverter::convert_to_d(std::string arg)
{
	char** endptr;
	double tmp = strtod(arg.c_str(),endptr);
	if (endptr == '\0')
	{
		_d = tmp;
		std::cout << _d << std::endl;
	}

}


void	ScalarConverter::convert(std::string arg)
{
	convert_to_d(arg);
}