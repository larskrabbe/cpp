
#include	"Bureaucrat.hpp"
#include	"AForm.hpp"
#include	"Form.hpp"
#include	<iostream>
#include	"ShrubberyCreationForm.hpp"
#include	"PresidentialPardonForm.hpp"
#include	"RobotomyRequestForm.hpp"

void block_1()
{
	Form x("paper",100,80);
	Bureaucrat bob("bob", 90);
	x.beSign(bob);
	bob.executeForm(x);
	std::cout << x << std::endl;
}

void block_2()
{
	AForm* ptr;
	ShrubberyCreationForm tree("trees");
	ptr = &tree;
	Bureaucrat bob("bob",150);
	ptr->beSign(bob);
	// tree.execute(bob);
	bob.executeForm(*ptr);
	std::cout << tree << std::endl;
}

void block_3()
{
	ShrubberyCreationForm tree;
	Bureaucrat bob("bob",1);
	tree.beSign(bob);
	tree.execute(bob);
	std::cout << tree << std::endl;
}

void block_4()
{
	PresidentialPardonForm tree("Jo mama");
	Bureaucrat bob("bob",1);
	tree.beSign(bob);
	tree.execute(bob);
	std::cout << tree << std::endl;
}

void block_5()
{
	RobotomyRequestForm tree("Jo mama");
	Bureaucrat bob("bob",1);
	tree.beSign(bob);
	tree.execute(bob);
	std::cout << tree << std::endl;
}


int main()
{
	try
	{
		block_5();
	}
	catch(const std::exception & x )
	{
		// std::cerr << x.message() << '\n';
		// no need to print twice
	}
	return(0);
}