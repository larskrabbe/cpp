
#ifndef CLASS_ScavTrap
# define CLASS_ScavTrap

#include	"ClapTrap.hpp"

// enum e_msg{
// 	msg_default_construct,
// 	msg_copy_construct,
// 	msg_no_energy,
// 	msg_no_health,
// 	msg_string_construct,
// 	msg_deconstruct,
// 	msg_attack,
// 	msg_takeDmg,
// 	msg_repaired,
// 	msg_equal,
// };





class ScavTrap : public ClapTrap
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
		ScavTrap();
		ScavTrap(std::string);
		ScavTrap(const ScavTrap&);
		~ScavTrap();
		ScavTrap &operator= (const ScavTrap& a);
};

#endif

