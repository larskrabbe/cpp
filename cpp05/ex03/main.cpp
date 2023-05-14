
#include	"Bureaucrat.hpp"
#include	"AForm.hpp"
#include	"Form.hpp"
#include	<iostream>
#include	"ShrubberyCreationForm.hpp"
#include	"PresidentialPardonForm.hpp"
#include	"RobotomyRequestForm.hpp"
#include	"Intern.hpp"

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
	ShrubberyCreationForm tree("trees");
	Bureaucrat bob("bob",150);
	tree.beSign(bob);
	// tree.execute(bob);
	bob.executeForm(tree);
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

void block_6()
{
	Intern bob;
	try{
		bob.makeForm("easdfas","Kittys");
	}
	catch(Intern::Exception& e)
	{
		std::cout << e.message() << std::endl;
	}
}


void block_7()
{
	Intern bob;
	AForm* ptr;
	try{
		ptr = bob.makeForm("PresidentialPardonForm","Peter");
	}
	catch(Intern::Exception& e)
	{
		std::cout << e.message() << std::endl;
		throw(std::exception());
	}
	Bureaucrat Bull("Bull",1);
	ptr->beSign(Bull);
	Bull.executeForm(*ptr);
	delete(ptr);
}

int main()
{
	try
	{
		block_7();
	}
	catch(const std::exception & x )
	{
		// std::cerr << x.message() << '\n';
		// no need to print twice
	}
	return(0);
}