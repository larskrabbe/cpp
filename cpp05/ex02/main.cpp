
#include	"Bureaucrat.hpp"
#include	"AForm.hpp"
#include	<iostream>


void block_1()
{
	Form x("paper",100,50);
	Bureaucrat bob("bob", 100);
	x.beSign(bob);
	std::cout << x << std::endl;
}

void block_2()
{
	Form x("paper",100,50);
	Bureaucrat bob("bob", 101);
	try
	{
		x.beSign(bob);
	}
	catch(std::exception& e)
	{
	}
	std::cout << x << std::endl;
}

void block_3()
{
	Form x("paper",100,160);
	Bureaucrat bob("bob", 101);
	x.beSign(bob);
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
		block_2();
	}
	catch(const std::exception & x)
	{
		// std::cerr << x.message() << '\n';
		// no need to print twice
	}
	
	return(0);
}