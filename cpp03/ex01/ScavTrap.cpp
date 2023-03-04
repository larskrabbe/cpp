
#include	"ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->name = "\"scavBitch\"";
	this->Hit_points = 10;
	this->Attack_damage = 0;
	this->Energy_points = 10;
	print_action(msg_default_construct);
}

ScavTrap::ScavTrap(std::string name) : name(name)
{
	this->Hit_points = 10;
	this->Attack_damage = 0;
	this->Energy_points = 10;
	print_action(msg_string_construct);
}

ScavTrap::ScavTrap(const ScavTrap &a)
{
	this->name = a.name;
	this->Attack_damage = a.Attack_damage;
	this->Energy_points = a.Energy_points;
	this->Hit_points = a.Hit_points;
	print_action(msg_copy_construct);	
}

ScavTrap::~ScavTrap()
{
	print_action(msg_deconstruct);
}

ScavTrap& ScavTrap::operator= (const ScavTrap& a)
{
	this->Attack_damage = a.Attack_damage;
	this->Energy_points = a.Energy_points;
	this->Hit_points = a.Hit_points;
	this->name = a.name;
	print_action(msg_equal);
	return (*this);	
}

