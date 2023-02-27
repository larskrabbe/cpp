#include	<string>

#ifndef WEAPON_CLASS
# define WEAPON_CLASS

class Weapon
{
	private:
		std::string		type;
	public:
						Weapon(std::string name = "Fist");
						~Weapon();
		std::string		getType();
		void			setType(std::string);
};

#endif