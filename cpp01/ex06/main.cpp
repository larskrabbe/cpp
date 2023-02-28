
#include	"Harl.hpp"
#include	<iostream>

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		std::cout << " exe + one argument. !!! not more or less" << std::endl;
		return (0);
	}
	Harl peter(argv[1]);
	peter.complain("Info");
}