
#ifndef CLASS_Bureaucrat
# define CLASS_Bureaucrat

#include	<string>

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name);
		Bureaucrat(const Bureaucrat &a);
		~Bureaucrat();
		Bureaucrat &operator= (const Bureaucrat& a);
};

#endif

