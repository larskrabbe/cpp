
#include	"Harl.hpp"
#include	<iostream>

int main()
{
	Harl peter;
	std::cout << "start" << std::endl;
	peter.complain("Info");
	peter.complain("Debug");
	peter.complain("Info");
	peter.complain("Info");
	peter.complain("Error");
	peter.complain("Info");
	peter.complain("Warning");
}