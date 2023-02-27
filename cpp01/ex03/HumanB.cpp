
#include	"HumanB.hpp"
#include	<iostream>

HumanB::HumanB()
{
	this->name = "Someone";
	this->weapon = NULL;
}

HumanB::HumanB(std::string a) : name(a)
{

}

HumanB::~HumanB()
{
	
}

void	HumanB::setWeapon(Weapon& new_weapon)
{
	this->weapon = &new_weapon;
}

void	HumanB::attack()
{
	std::cout << this->name << " attack with their " << this->weapon->getType()<< std::endl;
}