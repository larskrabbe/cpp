
#ifndef CLASS_ShrubberyCreationForm
# define CLASS_ShrubberyCreationForm

#include	"AForm.hpp"

class ShrubberyCreationForm:public AForm
{
	private:
		const std::string	_target;
	public:
		void	form_action() const;
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &a);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator= (const ShrubberyCreationForm& a);
	//Exception
};

#endif
