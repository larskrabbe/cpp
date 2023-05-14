
#ifndef CLASS_RobotomyRequestForm
# define CLASS_RobotomyRequestForm

#include	"AForm.hpp"

class RobotomyRequestForm:public AForm
{
	private:
		const std::string	_target;
	public:
		void	form_action() const;
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &a);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator= (const RobotomyRequestForm& a);
};

#endif
