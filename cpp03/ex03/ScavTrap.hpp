
#ifndef CLASS_ScavTrap
# define CLASS_ScavTrap

#include	"ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	private:
		std::string				name;
		virtual void			print_action(e_msg msg);
		virtual void			print_action(e_msg msg, std::string);
		virtual void			print_action(e_msg msg, unsigned int);
	public:
		void					attack( const std::string& target );
		void					guardGate( void );
		ScavTrap();
		ScavTrap(std::string);
		ScavTrap(const ScavTrap&);
		~ScavTrap();
		ScavTrap &operator= (const ScavTrap& a);
};

#endif

