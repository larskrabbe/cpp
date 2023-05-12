
#ifndef CLASS_RobotomyRequestForm
# define CLASS_RobotomyRequestForm

#include	"AForm.hpp"

class RobotomyRequestForm:public AForm
{
	private:
		const std::string	_target;
		const std::string	_name;
		bool				_is_signed;
		const int			_grade_to_sign;
		const int			_grade_to_execute;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &a);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator= (const RobotomyRequestForm& a);
};

#endif

/*

#include	"RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &a)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& a)
{
	
	return (*(this));
}
*/