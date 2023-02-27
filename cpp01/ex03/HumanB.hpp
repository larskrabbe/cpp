#include	<string>
#include	"Weapon.hpp"

#ifndef HUMANb_CLASS
# define HUMANB_CLASS


class HumanB
{
	private:
		std::string		name;
		Weapon*			weapon;
	public:
						HumanB();
						HumanB(std::string name);
						~HumanB();
	void				attack();
	void				setWeapon(Weapon&);

};

#endif