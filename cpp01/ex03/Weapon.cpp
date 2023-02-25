#include	"Weapon.hpp"

Weapon::Weapon()
{
	
}

Weapon::~Weapon()
{
	
}

std::string		Weapon::getType()
{
	return(this->type);
}

void			Weapon::setType(std::string new_weapon)
{
	this->type = new_weapon;

}
