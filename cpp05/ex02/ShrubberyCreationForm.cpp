#include	"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()_name("ShrubberyCreationForm"),_grade_to_sign(145),_grade_to_execute(137)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &a):_name("ShrubberyCreationForm"),_grade_to_sign(145),_grade_to_execute(137)
{
		this->_is_signed = a._is_signed;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& a)
{
	this->_is_signed = a._is_signed;
	return (*(this));
}
