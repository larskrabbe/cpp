#include	"Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("default")
{
	
}


Bureaucrat::Bureaucrat(std::string name):_name(name)
{
	
}



Bureaucrat::Bureaucrat(const Bureaucrat &a):_name(a._name)
{
	
}

Bureaucrat::~Bureaucrat()
{
	
}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& a)
{
	this->_grade = a._grade;
	return (*(this));
}
