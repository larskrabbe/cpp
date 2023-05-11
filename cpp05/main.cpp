
#include	"Bureaucrat.hpp"
#include	<iostream>
int main()
{
	try
	{
		Bureaucrat bc(1);
		bc++;
		bc--;
		std::cout << bc << std::endl;
	}
	catch(const std::string& str)
	{
		std::cerr << str << '\n';
	}
	
	return(0);
}