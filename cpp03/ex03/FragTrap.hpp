
#ifndef CLASS_FragTrap
# define CLASS_FragTrap

#include	"ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	private:
		std::string				name;
		virtual void			print_action(e_msg msg);
		virtual void			print_action(e_msg msg, std::string);
		virtual void			print_action(e_msg msg, unsigned int);
	public:
		void					attack( const std::string& target );
		void					highFivesGuys( void );
		FragTrap();
		FragTrap(std::string);
		FragTrap(const FragTrap&);
		~FragTrap();
		FragTrap &operator= (const FragTrap& a);
};

#endif

