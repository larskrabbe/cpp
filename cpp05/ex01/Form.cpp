
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


int check_grade(int grade, int form_grade)
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

Form::Form():_name("default"),_is_signed(false),_grade_to_sign(42),_grade_to_execute(42),
{

}

Form::Form(const Form &src):_name(src._name),_is_signed(false),_grade_to_sign(check_grade(src._grade_to_sign)),_grade_to_execute(check_grade(src._grade_to_execute))
{
}

Form::~Form()
{
	
}

Form& Form::operator= (const Form& a)
{
	this->_is_signed = a._is_signed;
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

void		Form::beSign(Bureaucrat& bc)
{
	try
	{
		if (bc.get_grade() > _grade_to_sign)
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
