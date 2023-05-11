
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

std::ostream& operator<< ( std::ostream& os, const Bureaucrat& bc )
{
	os << bc.get_name().c_str() << ", bureaucrat grade " << bc.get_grade();
	return(os);
}

Bureaucrat::Bureaucrat( void ) :_name("Nemo"), _grade(42)
{

}

Bureaucrat::Bureaucrat( int grade ) :_name("Nemo")
{
	
	try
	{
		if (grade <= HIGHEST_GRADE)
		{
			throw(Bureaucrat::GradeTooHighException());
		}
		else if (grade >= LOWEST_GRADE)
		{
			throw(Bureaucrat::GradeTooLowException());
		}
		else
		{
			this->_grade = grade;
		}
	}
	catch(const Bureaucrat::Exception& e)
	{
		std::cerr << e.message() << std::endl;
		throw();
	}

} 

Bureaucrat::Bureaucrat( std::string name ) :_name(name), _grade(42)
{

}

Bureaucrat::Bureaucrat( std::string name , int grade ) :_name(name)
{
	try
	{
		if (grade <= HIGHEST_GRADE)
		{
			throw(Bureaucrat::GradeTooHighException());
		}
		else if (grade >= LOWEST_GRADE)
		{
			throw(Bureaucrat::GradeTooLowException());
		}
		else
		{
			this->_grade = grade;
		}
	}
	catch(const Bureaucrat::Exception& e)
	{
		std::cerr << e.message() << std::endl;
			throw(e);
	}
}
Bureaucrat::~Bureaucrat()
{
}
