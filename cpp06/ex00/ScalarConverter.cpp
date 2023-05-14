
#include	<string>
#include	<iostream>
#include	"ScalarConverter.hpp"

void	ScalarConverter::convert(std::string arg)
{
	std::stoi(arg);
	std::stof(arg);
	std::stod(arg);
}