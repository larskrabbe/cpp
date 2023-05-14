#include	"Bureaucrat.hpp"

int			Bureaucrat::get_grade( void ) const
{
	return (_grade);
}
std::string	Bureaucrat::get_name( void ) const
{
	return (_name);
}

void	Bureaucrat::increase_grade( void )
{
	try
	{
		if (_grade <= HIGHEST_GRADE)
			throw(Bureaucrat::GradeTooHighException());
		else
			_grade--;
	}
	catch(const Bureaucrat::Exception& e)
	{
		std::cerr << e.message() << std::endl;
		throw(Exception(e));
	}
}

void	Bureaucrat::decrease_grade( void )
{
	try
	{
		if (_grade >= LOWEST_GRADE)
			throw(Bureaucrat::GradeTooLowException());
		else
			_grade++;
	}
	catch(const Bureaucrat::Exception& e)
	{
		std::cerr << e.message() << std::endl;
		throw(Exception(e));
	}
}

Bureaucrat& Bureaucrat::operator ++ ()
{
	this->increase_grade();
	return (*this);
}

Bureaucrat& Bureaucrat::operator -- ()
{
	this->decrease_grade();
	return (*this);
}

Bureaucrat Bureaucrat::operator -- (int)
{
	Bureaucrat tmp(*this);
	this->decrease_grade();
	return (tmp);
}

Bureaucrat Bureaucrat::operator ++ (int)
{
	Bureaucrat tmp(*this);
	this->increase_grade();
	return (tmp);
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& src)
{
	this->_grade = check_grade(src._grade);
	return (*this);
}

std::ostream& operator<< ( std::ostream& os, const Bureaucrat& bc )
{
	os << bc.get_name().c_str() << ", bureaucrat grade " << bc.get_grade();
	return(os);
}

Bureaucrat::Bureaucrat( void ) :_name("Nemo"), _grade(42)
{

}

int check_grade(int grade)
{
	try
	{
		if (grade < HIGHEST_GRADE)
		{
			throw(Bureaucrat::GradeTooHighException());
		}
		else if (grade > LOWEST_GRADE)
		{
			throw(Bureaucrat::GradeTooLowException());
		}
	}
	catch(const Bureaucrat::Exception& e)
	{
		std::cerr << e.message() << std::endl;
		throw(e);
	}
	return (grade);
}

Bureaucrat::Bureaucrat( int grade ) :_name("Nemo"), _grade(check_grade(grade))
{

} 

Bureaucrat::Bureaucrat( std::string name ) :_name(name), _grade(42)
{

}


Bureaucrat::Bureaucrat( std::string name , int grade ) :_name(name), _grade(check_grade(grade))
{

}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(Bureaucrat& other) :_name(other._name ), _grade(check_grade(other._grade))
{

}


const std::string Bureaucrat::Exception::message() const
{
	return("Error");
}

const std::string Bureaucrat::GradeTooHighException::message() const
{
	return("Grade is to High");
}

const std::string Bureaucrat::GradeTooLowException::message() const
{
	return("Grade is to Low");
}

const std::string Bureaucrat::FormNotSigned::message() const
{
	return("The Form is not signed");
}

const std::string Bureaucrat::Fatal::message() const
{
	return("Fatal Error");
}
 void Bureaucrat::signForm(std::string form_name, std::string reason) const
{
	if (reason.empty() == true)
	{
		std::cout << get_name() << " signed " << form_name <<std::endl;
	}
	else
	{
		std::cout << get_name() << " couldn’t sign " << form_name << " because " << reason << std::endl;
	}
}

void		Bureaucrat::executeForm(const Form& form)
{
	try
	{
		if (form.get_is_signed() == false)
			throw(FormNotSigned());
		if (this->get_grade() > form.get_grade_to_execute())
			throw(GradeTooLowException());
	}
	catch(const Bureaucrat::Exception& e)
	{
		std::cerr << _name << " Failed to execute Form " << form.get_name() << " because : "<< e.message() << std::endl;
		return;
	}
	std::cout << _name << " executed " << form.get_name() << std::endl;
}

void		Bureaucrat::executeForm(const AForm& form)
{
	( void)form;
	form.execute(*this);
}
