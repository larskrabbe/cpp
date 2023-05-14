
#ifndef CLASS_Intern
# define CLASS_Intern

#include	"AForm.hpp"
#include	<string>

class AForm;

#include	"PresidentialPardonForm.hpp"
#include	"RobotomyRequestForm.hpp"
#include	"ShrubberyCreationForm.hpp"


class Intern
{
	private:
		AForm*		get_new_PresidentialPardonForm( std::string target ) const;
		AForm*		get_new_RobotomyRequestForm( std::string target ) const;
		AForm*		get_new_ShrubberyCreationForm( std::string target ) const;
		AForm*		(Intern::* f_member[3])( std::string ) const;
		std::string	f_names[3];
	public:
		AForm* makeForm(std::string form, std::string target) const;
		Intern();
		Intern(const Intern &a);
		~Intern();
		Intern &operator= (const Intern& a);
		struct Exception : public std::exception{
			virtual const std::string message() const;};
};

#endif
