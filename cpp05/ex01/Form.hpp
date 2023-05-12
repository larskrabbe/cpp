
#ifndef CLASS_Form
# define CLASS_Form

#include	<string>
#include	"Bureaucrat.hpp"
class Form
{
	public:
	//getter
		std::string	get_name();
		bool		get_is_signed();
		int			get_grade_to_sign();
		int			get_grade_to_execute();
	// utiels
		void		beSign(Bureaucrat& bc);
	private:
		const std::string	_name;
		bool				_is_signed;
		const int			_grade_to_sign;
		const int			_grade_to_execute;
	public:
// de- / constructor
		Form();
		Form(const Form &a);
		~Form();
// operator
		Form &operator= (const Form& a);
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
#endif


int				check_grade(int grade);
std::ostream&	operator<< ( std::ostream& os, const Form& bc );
