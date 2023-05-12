
#ifndef CLASS_Bureaucrat
# define CLASS_Bureaucrat

#include	<string>
#include	<iostream>

#define HIGHEST_GRADE 	1
#define LOWEST_GRADE 	150

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
//getter
	int			get_grade( void ) const; 
	std::string	get_name( void ) const;
//setter?
	void		increase_grade( void );
	void		decrease_grade( void );
// operator
	Bureaucrat&	operator =  ( const Bureaucrat& src );
	Bureaucrat& operator ++ ( void );
	Bureaucrat& operator -- ( void );
	Bureaucrat 	operator ++ ( int );
	Bureaucrat	operator -- ( int );
//Exception
	struct Exception : public std::exception{
		virtual const std::string message() const;
			// {return("Error");}
			};
	struct GradeTooHighException : public Bureaucrat::Exception{
		const std::string message() const;
			// {return("Grade is to High");}
			};
	struct GradeTooLowException :   public Bureaucrat::Exception{
		const std::string message() const;
			// {return("Grade is to Low");}
			};
};

int check_grade(int grade);
std::ostream& operator<< ( std::ostream& os, const Bureaucrat& bc );

#endif