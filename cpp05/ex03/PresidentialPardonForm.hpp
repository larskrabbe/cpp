
#ifndef CLASS_PresidentialPardonForm
# define CLASS_PresidentialPardonForm

#include	"AForm.hpp"

class PresidentialPardonForm:public AForm
{
	private:
		const std::string	_target;
	public:
		void	form_action() const;
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &a);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator= (const PresidentialPardonForm& a);
};

#endif
