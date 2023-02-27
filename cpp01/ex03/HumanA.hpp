#include	<string>
#include	"Weapon.hpp"

#ifndef HUMANA_CLASS
# define HUMANA_CLASS

class HumanA
{
	private:
		std::string		name;
		Weapon&			weapon;
	public:
						HumanA( Weapon& new_weapon);
						HumanA(std::string name, Weapon& new_weapon);
						~HumanA();
	void				attack();

};

#endif
