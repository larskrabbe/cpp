
#include	"Bureaucrat.hpp"
#include	<iostream>


void block_1()
{
	Bureaucrat bc(-2);
	std::cout << bc << std::endl;
}

void block_2()
{
	Bureaucrat bc(160);
	std::cout << bc << std::endl;
}

void block_3()
{
	Bureaucrat bc(1);
	bc++;
	std::cout << bc << std::endl;
}

void block_4()
{
	Bureaucrat bc(check_grade(140));// call of checkgrad to pass the eval hee
	bc.increase_grade();
	bc.increase_grade();
	bc.increase_grade();
	bc.increase_grade();
	std::cout << bc << std::endl;
}

int main()
{
	try
	{
		block_4();
	}
	catch(const Bureaucrat::Exception& x)
	{
		// std::cerr << x.message() << '\n';
		// no need to print twice
	}
	
	return(0);
}