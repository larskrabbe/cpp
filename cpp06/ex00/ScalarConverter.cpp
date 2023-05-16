
#include	<string>
#include	<iostream>
#include	"ScalarConverter.hpp"

static char g_type = '0';

// void	convert_to_d(std::string arg)
// {
// 	char** endptr = NULL;
// 	double tmp = strtod(arg.c_str(),endptr);
// 	if (endptr == '\0')
// 	{
// 		// _d = tmp;
// 		// std::cout << _d << std::endl;
// 	}
// }



void	print_result()
{
	if ((ascii >= 32 && ascii <= 47) || (ascii >= 58 && ascii <= 127))
		std::cout << "char: "<< "tmp" << std::endl;
	std::cout << "int: "<< "tmp" << std::endl;
	std::cout << "float: "<< "tmp" << std::endl;
	std::cout << "double: "<< "tmp" << std::endl;
	std::cout << "double: "<< (char)127 << std::endl;
}

void	check_type(std::string arg)
{
	if (arg.size() == 1 && isdigit(arg[0]))
	{
		char ascii = (char)arg[0];
		if ((ascii >= 32 && ascii <= 47) || (ascii >= 58 && ascii <= 127))
			g_type = 'c';
		else if ()
	}
	// char** endptr;
	// double d = strtod(arg.c_str(),endptr);
}

void	ScalarConverter::convert(std::string arg)
{
	(void)arg;
	check_type(arg);
	// convert_to_d(arg);
	std::cout << g_type << std::endl;
	print_result();
	g_type = '0';
}