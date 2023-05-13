
#ifndef CLASS_ShrubberyCreationForm
# define CLASS_ShrubberyCreationForm

#include	"AForm.hpp"

class ShrubberyCreationForm:public AForm
{
	private:
		const std::string	_target;
		const std::string	_name;
		bool				_is_signed;
		const int			_grade_to_sign;
		const int			_grade_to_execute;
	public:
		void	form-form_action();
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &a);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator= (const ShrubberyCreationForm& a);
};

#endif

/*

#include	"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &a)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& a)
{
	
	return (*(this));
}
*/