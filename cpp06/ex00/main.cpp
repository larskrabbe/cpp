
#include	"ScalarConverter.hpp"
#include	<iostream>

int main(int argc, char* argv[])
{
	if (argc != 2)
		std::cout << "ERROR INVALID INPUT " << std::endl << "<./exe.out> <string>" << std::endl;
	else
		ScalarConverter::convert(argv[1]);
	// needs inout protection arg 1 3
	// ScalarConverter::convert("nan");
	// ScalarConverter::convert("inf");
	// ScalarConverter::convert("inff");
	// ScalarConverter::convert("-inff");
	// ScalarConverter::convert("+inff");
	// ScalarConverter::convert("inff");
	// ScalarConverter::convert("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
	// ScalarConverter::convert("a");
	// ScalarConverter::convert("5.0bb");
	// ScalarConverter::convert("126");
	// ScalarConverter::convert("127");
	// ScalarConverter::convert("100.2");
	// ScalarConverter::convert("100.25468321");
	// ScalarConverter::convert("abc");
	// ScalarConverter::convert("42.2");
	// ScalarConverter::convert("0.0f");
	// ScalarConverter::convert("5.0");
	// ScalarConverter::convert("-10");
	// ScalarConverter::convert("-42.42f");
	// ScalarConverter::convert("2147483647");
	return (0);
}