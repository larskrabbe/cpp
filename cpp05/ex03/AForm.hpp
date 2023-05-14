
#ifndef CLASS_AForm
# define CLASS_AForm

#include	<string>
#include	"Bureaucrat.hpp"
// #include	"Form.hpp"
class Bureaucrat;

class AForm
{
	public:
		std::string		get_name() const;
		bool			get_is_signed() const;
		int				get_grade_to_sign() const;
		int				get_grade_to_execute() const;
		void			execute(Bureaucrat& b) const;
		void			beSign(Bureaucrat& bc);

	private:
		virtual void	form_action() const = 0;
		const std::string	_name;
		bool				_is_signed;
		const int			_grade_to_sign;
		const int			_grade_to_execute;
// de- / constructor
	protected:
		void	set_is_signed(bool b);
		AForm();
		AForm(std::string name,int grade_to_sign, int grade_to_execute);
		AForm(const AForm &a);
	public:
		virtual ~AForm();
// operator
		AForm &operator= (const AForm& a);
//Exception
	struct Exception : 				public std::exception{
		virtual const std::string message() const;};
	struct GradeTooHighException :	public AForm::Exception{
		const std::string message() const;};
	struct GradeTooLowException :   public AForm::Exception{
		const std::string message() const;};
	struct Fatal :   				public AForm::Exception{
		const std::string message() const;};
	struct FormNotSigned :   		public AForm::Exception{
		const std::string message() const;};
};
std::ostream&	operator<< ( std::ostream& os, const AForm& f );
#endif
