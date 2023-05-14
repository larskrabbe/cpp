
#include	"AForm.hpp"

AForm::AForm():_name("default"),_is_signed(false),_grade_to_sign(42),_grade_to_execute(42)
{

}

AForm::AForm(const AForm &src):_name(src._name),_is_signed(false),_grade_to_sign(check_grade(src._grade_to_sign)),_grade_to_execute(check_grade(src._grade_to_execute))
{
}

AForm::AForm(std::string name,int grade_to_sign, int grade_to_execute):_name(name),_is_signed(false),_grade_to_sign(check_grade(grade_to_sign)),_grade_to_execute(check_grade(grade_to_execute))
{
}


AForm::~AForm()
{
	
}

AForm& AForm::operator= (const AForm& a)
{
	this->_is_signed = a._is_signed;
	return (*(this));
}

std::string	AForm::get_name() const
{
	return(_name);
}

bool	AForm::get_is_signed() const
{
	return(_is_signed);
}

int	AForm::get_grade_to_sign() const
{
	return(_grade_to_sign);
}

int	AForm::get_grade_to_execute() const
{
	return(_grade_to_execute);
}

void		AForm::beSign(Bureaucrat& bc)
{
	try
	{
		if (bc.get_grade() > _grade_to_sign)
		{
			throw(AForm::GradeTooLowException());
		}
	}
	catch(const AForm::Exception& e)
	{
		std::cerr << e.message() << std::endl;
		bc.signForm(_name,e.message());
		return;
	}
	_is_signed = true;
	bc.signForm(_name , "");
}


const std::string AForm::Exception::message() const
{
	return("Error");
}

const std::string AForm::GradeTooHighException::message() const
{
	return("Grade is to High");
}

const std::string AForm::GradeTooLowException::message() const
{
	return("Grade is to Low");
}

const std::string AForm::FormNotSigned::message() const
{
	return("The Form is not signed");
}

const std::string AForm::Fatal::message() const
{
	return("Fatal Error");
}
std::ostream& operator<< ( std::ostream& os, const AForm& f )
{
	if (f.get_is_signed() == true)
		os << f.get_name() << " AForm is signed " << std::endl;
	else
		os << f.get_name() << " AForm is not signed " << std::endl;
	os << "It required " << f.get_grade_to_sign() << " to be signed" << std::endl;
	os << "And " << f.get_grade_to_execute() << " to be executed";
	return(os);
}

void	AForm::form_action() const
{

}

void	AForm::execute(Bureaucrat& bc) const
{
	try
	{
		if (_is_signed == false)
			throw(FormNotSigned());
		if (bc.get_grade() > _grade_to_execute)
			throw(GradeTooLowException());
	}
	catch(const AForm::Exception& e)
	{
		std::cerr << e.message() << std::endl;
		return;
	}
	std::cout << bc.get_name() << " executed " << get_name() << std::endl;
	form_action();
}

void	AForm::set_is_signed(bool b)
{
	_is_signed = b;
}