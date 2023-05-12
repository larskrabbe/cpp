
#include	"Form.hpp"

Form::Form():_name("default"),_is_signed(false),_grade_to_sign(42),_grade_to_execute(42)
{

}

Form::Form(const Form &src):_name(src._name),_is_signed(false),_grade_to_sign(check_grade(src._grade_to_sign)),_grade_to_execute(check_grade(src._grade_to_execute))
{
}

Form::Form(std::string name,int grade_to_sign, int grade_to_execute):_name(name),_is_signed(false),_grade_to_sign(check_grade(grade_to_sign)),_grade_to_execute(check_grade(grade_to_execute))
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


std::string	Form::get_name() const
{
	return(_name);
}

bool	Form::get_is_signed() const
{
	return(_is_signed);
}

int	Form::get_grade_to_sign() const
{
	return(_grade_to_sign);
}

int	Form::get_grade_to_execute() const
{
	return(_grade_to_execute);
}

void		Form::beSign(Bureaucrat& bc)
{
	try
	{
		if (bc.get_grade() > _grade_to_sign)
		{
			throw(Form::GradeTooLowException());
		}
	}
	catch(const Form::Exception& e)
	{
		std::cerr << e.message() << std::endl;
		bc.signForm(_name,e.message());
		throw(e);
	}
	_is_signed = true;
	bc.signForm(_name , "");
}


const std::string Form::Exception::message() const
{
	return("Error");
}

const std::string Form::GradeTooHighException::message() const
{
	return("Grade is to High");
}

const std::string Form::GradeTooLowException::message() const
{
	return("Grade is to Low");
}

std::ostream& operator<< ( std::ostream& os, const Form& f )
{
	if (f.get_is_signed() == true)
		os << f.get_name() << " Form is signed " << std::endl;
	else
		os << f.get_name() << " Form is not signed " << std::endl;
	os << "It required " << f.get_grade_to_sign() << " to be signed" << std::endl;
	os << "And " << f.get_grade_to_execute() << " to be executed";
	return(os);
}
