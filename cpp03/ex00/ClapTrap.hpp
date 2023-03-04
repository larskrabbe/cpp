
#ifndef CLASS_ClapTrap
# define CLASS_ClapTrap

#include "ClapTrap.h" 
#include	<string>

class ClapTrap
{
	private:
		std::string		name;
		int				Hit_points;
		int				Energy_points;
		int				Attack_damage;
		void			print_action(e_msg msg);
		void			print_action(e_msg msg, std::string);
		void			print_action(e_msg msg, unsigned int);
	public:
		void			attack( const std::string& target );
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		bool			EnergyCheck( void );
		bool			HealthCheck( void );
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &a);
		~ClapTrap();
		ClapTrap &operator= (const ClapTrap& a);
};

#endif
