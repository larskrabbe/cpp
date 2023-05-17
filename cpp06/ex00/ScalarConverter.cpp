
#include	<string>
#include	<cmath>
#include	<iostream>
#include	<iomanip>
#include	"ScalarConverter.hpp"

static char g_type = '0';
static double g_value = 0;

void	print_huge(std::string str)
{
	std::cout << "char: "<<   "impossible" << std::endl;
	std::cout << "int: "<<    "impossible" << std::endl;
	std::cout << "float: " <<  str << 'f' <<std::endl;
	std::cout << "double: "<< str << std::endl;
	return ;
}

void	print_result()
{
	// std::cout << g_type << " = " << (long long)g_value <<std::endl;
	if (g_type == '+'||  std::isinf(g_type))
	{
		print_huge("inf");
		return;
	}
	else if(g_type == '-' ||  g_value == HUGE_VAL)
	{
		print_huge("-inf");
		return;		
	}
	else if (g_type == 'n' || g_value == NAN)
	{
		print_huge("nan");
		return;				
	}
	if (isprint(g_value) == true)
		std::cout << "char: '"<< static_cast<char>(g_value) << "'"<< std::endl;
	else
		std::cout << "char: "<< "Non displayable" << std::endl;
	if (g_value > INT32_MAX || g_value < INT32_MIN)
		std::cout << "int: type converssion not possible " << std::endl;
	else
		std::cout << "int: "<< static_cast<int>(g_value) << std::endl;
	if (g_type == 'd')
		std::cout << "float: type converssion not possible " << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(ScalarConverter::_precision) << static_cast<float>(g_value) << "f"<< std::endl;
	std::cout << "double: "<< static_cast<double>(g_value) << std::endl;
}

void	check_type(const std::string arg)
{
	if (arg.size() == 0)
		return;
	{
		char *endptr = NULL;
		g_value = strtod(arg.c_str(),&endptr);
	}
	if (arg.size() == 1)
	{
		if (isdigit((char)arg[0]) == false)
		{
			g_type = 'c';
			g_value = arg[0];
		}
		else
		{
			g_type = 'i';
			g_value = arg[0] - '0';
		}
		return;
	}
	{
		if (arg.compare("nan") == false || arg.compare("nanf")  == false)
			g_type = 'n';
		else if (arg.compare("+inf") == false  || arg.compare("+inff") == false  ||arg.compare("inf") == false  || arg.compare("inff") == false )
			g_type = '+';
		else if  (arg.compare("-inf") == false || arg.compare("-inff") == false )
			g_type = '-';
	}
	if (g_type != '0')
	{
		return;
	}
	{
		char *endptr = NULL;
		strtol(arg.c_str(),&endptr,10);
		if (*endptr == '\0')
		{
			g_type = 'i';
			g_value = strtod(arg.c_str(),&endptr);
			return;
		}
	}
	{
		char *endptr = NULL;
		float f = strtof(arg.c_str(),&endptr);
		if (f != HUGE_VALF && ((*endptr == 'f' && endptr[1] == '\0') || *endptr == '\0'))
 		{
			g_type = 'f';
			g_value = f;
			return;
		}
	}
	{
		char *endptr = NULL;
		double d = strtod(arg.c_str(),&endptr);
		if (*endptr == '\0')
		{
			g_type = 'd';
			g_value = d;
			if (d == HUGE_VAL)
				g_type = '+';
			return;
		}
	}
}

void	ScalarConverter::convert(std::string arg)
{
	g_value = 0;
	g_type = '0';
	check_type(arg);
	print_result();
	g_type = '0';
}