
#include	"Form.hpp"

int check_grade(int grade)
{
	try
	{
		if (grade < HIGHEST_GRADE)
		{
			throw(Form::GradeTooHighException());
		}
		else if (grade > LOWEST_GRADE)
		{
			throw(Form::GradeTooLowException());
		}
	}
	catch(const Form::Exception& e)
	{
		std::cerr << e.message() << std::endl;
		throw(e);
	}
	return (grade);
}

Form::Form():
_name("default"),
_grade_to_sign(42),
_grade_to_execute(42),
_is_signed(false)
{
}

Form::Form(const Form &src):
_name(src._name),
_grade_to_sign(check_grade(src._grade_to_sign)),
_grade_to_execute(check_grade(src._grade_to_execute)),
_is_signed(false)
{
}

Form::~Form()
{
	
}

Form& Form::operator= (const Form& a)
{
	return (*(this));
}


std::string	Form::get_name()
{
	return(_name);
}
bool	Form::get_is_signed()
{
	return(_is_signed);
}
int	Form::get_grade_to_sign()
{
	return(_grade_to_sign);
}
int	Form::get_grade_to_execute()
{
	return(_grade_to_execute);
}