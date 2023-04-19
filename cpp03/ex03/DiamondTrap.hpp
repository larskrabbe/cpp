
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#ifndef CLASS_DiamondTrap
# define CLASS_DiamondTrap

class DiamondTrap :public virtual FragTrap , public virtual ScavTrap
{
	private:
		std::string				name;
		virtual void			print_action(e_msg msg);
		virtual void			print_action(e_msg msg, std::string);
		virtual void			print_action(e_msg msg, unsigned int);
	public:
		void	whoAmI( void );
		void	attack(const std::string& Target);
		DiamondTrap();
		DiamondTrap(std::string name );
		DiamondTrap(const DiamondTrap &a);
		~DiamondTrap();
		DiamondTrap &operator= (const DiamondTrap& a);
};

#endif

