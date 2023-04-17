
#ifndef CLASS_ClapTrap
# define CLASS_ClapTrap

#include "ClapTrap.h" 
#include	<string>

class ClapTrap
{
	private:
		virtual void			print_action(e_msg msg);
		virtual void			print_action(e_msg msg, std::string);
		virtual void			print_action(e_msg msg, unsigned int);
	protected:
		std::string				name;
		int						Hit_points;
		int						Energy_points;
		int						Attack_damage;
		virtual void			attack( const std::string& target );
	public:
		void					takeDamage(unsigned int amount);
		void					beRepaired(unsigned int amount);
		bool					EnergyCheck( void );
		bool					HealthCheck( void );
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &a);
		~ClapTrap();
		ClapTrap &operator= (const ClapTrap& a);
};

#endif
