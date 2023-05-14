
#ifndef CLASS_Bureaucrat
# define CLASS_Bureaucrat

#include	<string>
#include	<iostream>

#define HIGHEST_GRADE 	1
#define LOWEST_GRADE 	150

#include "Form.hpp"
#include "AForm.hpp"
class AForm;
class Form;

class Bureaucrat
{
private:
	const std::string _name;
	int			_grade;
public:
// de- / constructor
	Bureaucrat( void );
	Bureaucrat( std::string name );
	Bureaucrat( int grade );
	Bureaucrat( std::string name , int grade ) ;
	Bureaucrat( Bureaucrat& other );
	~Bureaucrat();
//other
	void		signForm(std::string form_name, std::string reason) const;
//getter
	int			get_grade( void ) const; 
	std::string	get_name( void ) const;
//setter?
	void		increase_grade( void );
	void		decrease_grade( void );
	void		executeForm(Form const & form);
	void		executeForm(AForm const & form);
// operator
	Bureaucrat&	operator =  ( const Bureaucrat& src );
	Bureaucrat& operator ++ ( void );
	Bureaucrat& operator -- ( void );
	Bureaucrat 	operator ++ ( int );
	Bureaucrat	operator -- ( int );
//Exception
	struct Exception : public std::exception{
		virtual const std::string message() const;};
	struct GradeTooHighException : public Bureaucrat::Exception{
		const std::string message() const;};
	struct GradeTooLowException :   public Bureaucrat::Exception{
		const std::string message() const;};
	struct Fatal :   				public Bureaucrat::Exception{
		const std::string message() const;};
	struct FormNotSigned :   		public Bureaucrat::Exception{
		const std::string message() const;};
};

int				check_grade(int grade);
std::ostream&	operator<< ( std::ostream& os, const Bureaucrat& bc );

#endif