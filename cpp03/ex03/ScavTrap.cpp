
#include	"ScavTrap.hpp"
#include	<iostream>

void	ScavTrap::print_action(e_msg msg)
{	 
	switch(msg)
	{
		case(msg_default_construct):
			std::cout << "A ScavTrap " << " got created." << std::endl;
		break;
		case(msg_copy_construct):
			std::cout << "ScavTrap " << this->name << " got cloned" << std::endl;
		break;
		case(msg_no_energy):
			std::cout << "ScavTrap " << this->name << " has no Energy left" << std::endl;
		break;
		case(msg_no_health):
			std::cout << "ScavTrap " << this->name << " needs a  Screwdriver "<< std::endl;
		break;
		case(msg_string_construct):
			std::cout << "The ScavTrap " << this->name << " got created." << std::endl;
		break;
		case(msg_deconstruct):
			std::cout << "ScavTrap " << this->name << " went home  "<<std::endl;
		break;
		case(msg_equal):
			std::cout << "ScavTrap" << this->name << "information got overwritten" << std::endl;
		break;
		case(msg_guard):
			std::cout << "ScavTrap " << this->name << " is in guarding the gate" << std::endl;
		break;
		default:
			std::cout << this->name << " didnt got a message for this action" << std::endl;
		break;
	}

}

void	ScavTrap::print_action(e_msg msg, std::string add)
{
	switch(msg)
	{
		case(msg_attack):
			std::cout << "ScavTrap " << this->name << " attacks " << add << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
		break;
		default:
			std::cout << this->name << " didnt got a message for this action" << std::endl;
		break;
	}
}

void	ScavTrap::print_action(e_msg msg, unsigned int add)
{
	switch(msg)
	{
		case(msg_takeDmg):
			std::cout << "ScavTrap " << this->name << " took "  << add<< " points of damage!" << std::endl;
		break;
		case(msg_repaired):
			std::cout << "ScavTrap " << this->name << " is healed by " << add << " Hitpoint" << std::endl;
		break;
		default:
			std::cout << this->name << " didnt got a message for this action" << std::endl;
		break;
	}
}

// this is just here to pass the eval.
void	ScavTrap::attack(const std::string& target)
{
	std::cout << "Scav attack ::";
	if (this->EnergyCheck() || this->HealthCheck())
		return ;
	this->Energy_points--;
	this->print_action(msg_attack, target);
}

void	ScavTrap::guardGate( void )
{
	if (this->EnergyCheck() || this->HealthCheck())
		return ;
	print_action(msg_guard);
}

ScavTrap::ScavTrap()
{
	std::cout << "Scav "<< this << std::endl;
	this->name = "\"ScavTrap\"";
	this->Hit_points = 100;
	this->Attack_damage = 20;
	this->Energy_points = 50;
	print_action(msg_default_construct);
}

ScavTrap::ScavTrap(std::string name) : name(name)
{
	this->Hit_points = 100;
	this->Attack_damage = 20;
	this->Energy_points = 50;
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

