#include	"Intern.hpp"
#include	<string>

Intern::Intern()
{
	f_names[0] = "PresidentialPardonForm";
	f_names[1] = "RobotomyRequestForm";
	f_names[2] = "ShrubberyCreationForm";
	f_member[0] = &Intern::get_new_PresidentialPardonForm;
	f_member[1] = &Intern::get_new_RobotomyRequestForm;
	f_member[2] = &Intern::get_new_ShrubberyCreationForm;
}

Intern::Intern(const Intern &a)
{
	*this = a;
}

Intern::~Intern()
{
	
}

Intern& Intern::operator= (const Intern& a)
{
	(void)a;
	return (*(this));
}


AForm* Intern::get_new_PresidentialPardonForm( std::string target ) const
{
	return( new PresidentialPardonForm(target));
}
AForm* Intern::get_new_RobotomyRequestForm( std::string target ) const
{
	return( new RobotomyRequestForm(target));
}
AForm* Intern::get_new_ShrubberyCreationForm( std::string target ) const
{
	return( new ShrubberyCreationForm(target));
}


const std::string	Intern::Exception::message() const
{
	return("Form is not supported");
}

AForm* Intern::makeForm(std::string form, std::string target) const
{
	for (size_t i = 0; i < 3; i++)
	{
		if (f_names[i] == form)
		{
			std::cout << "Intern creates " << form << std::endl;
			return((this->*f_member[i])((std::string)target));
		}
	}
	throw(Exception());
}
