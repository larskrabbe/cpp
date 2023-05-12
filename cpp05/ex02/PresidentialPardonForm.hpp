
#ifndef CLASS_PresidentialPardonForm
# define CLASS_PresidentialPardonForm

#include	"AForm.hpp"

class PresidentialPardonForm:public AForm
{
	private:
		const std::string	_target;
		const std::string	_name;
		bool				_is_signed;
		const int			_grade_to_sign;
		const int			_grade_to_execute;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &a);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator= (const PresidentialPardonForm& a);
};

#endif

/*

#include	"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &a)
{
	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& a)
{
	
	return (*(this));
}
*/