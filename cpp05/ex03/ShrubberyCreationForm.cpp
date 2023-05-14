
#include	"ShrubberyCreationForm.hpp"
#include	<iostream>
#include	<fstream>

ShrubberyCreationForm::ShrubberyCreationForm():AForm("ShrubberyCreationForm",145,137),_target("default")
{
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("ShrubberyCreationForm",145,137),_target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &a):AForm("ShrubberyCreationForm",145,137),_target(a._target)
{
	this->set_is_signed(a.get_is_signed());
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& a)
{
	this->set_is_signed(a.get_is_signed());
	return (*(this));
}

void	ShrubberyCreationForm::form_action() const
{
	std::ofstream file;
	file.open(_target + "_shrubbery", std::ofstream::out | std::ofstream::trunc);
	if (!file.good())
		throw AForm::Fatal();
	file <<"           _-_"         << std::endl
         <<"        /~~   ~~\\"     << std::endl
         <<"     /~~         ~~\\"  << std::endl
         <<"    {               }"  << std::endl
         <<"     \\  _-     -_  /"  << std::endl
         <<"       ~  \\\\ //  ~"   << std::endl
         <<"    _- -   | | _- _"    << std::endl
         <<"      _ -  | |   -_"    << std::endl;
}