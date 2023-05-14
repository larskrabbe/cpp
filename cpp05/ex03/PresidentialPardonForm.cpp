#include	"PresidentialPardonForm.hpp"
#include	<iostream>
#include	<fstream>

PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm",25,5),_target("default")
{
}
PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("PresidentialPardonForm",25,5),_target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &a):AForm("PresidentialPardonForm",25,5),_target(a._target)
{
	this->set_is_signed(a.get_is_signed());
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& a)
{
	this->set_is_signed(a.get_is_signed());
	return (*(this));
}

void	PresidentialPardonForm::form_action() const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}