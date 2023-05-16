
#include	"ScalarConverter.hpp"


int main()
{
	// needs inout protection arg 1 3
	ScalarConverter::convert("a");
	ScalarConverter::convert("5");
	ScalarConverter::convert("abc");
	ScalarConverter::convert("123");
	return (0);
}