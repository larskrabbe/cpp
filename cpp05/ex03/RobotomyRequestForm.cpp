#include	"RobotomyRequestForm.hpp"
#include	<iostream>
#include	<fstream>

RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyRequestForm",72,45),_target("default")
{
}
RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("RobotomyRequestForm",72,45),_target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &a):AForm("RobotomyRequestForm",72,45),_target(a._target)
{
	this->set_is_signed(a.get_is_signed());
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& a)
{
	this->set_is_signed(a.get_is_signed());
	return (*(this));
}

void	RobotomyRequestForm::form_action() const
{
	if (time(NULL) % 2 == false)
	{
		std::cout << _target << " has been robotomized" << std::endl;
	}
	else
	{
		std::cout << _target << " failed the robotomy" << std::endl;
	}
}