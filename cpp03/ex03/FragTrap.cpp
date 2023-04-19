
#include	"FragTrap.hpp"
#include	<iostream>

void	FragTrap::print_action(e_msg msg)
{	 
	switch(msg)
	{
		case(msg_default_construct):
			std::cout << "A FragTrap " << " got created." << std::endl;
		break;
		case(msg_copy_construct):
			std::cout << "FragTrap " << this->name << " got cloned" << std::endl;
		break;
		case(msg_no_energy):
			std::cout << "FragTrap " << this->name << " has no Energy left" << std::endl;
		break;
		case(msg_no_health):
			std::cout << "FragTrap " << this->name << " needs a  Screwdriver "<< std::endl;
		break;
		case(msg_string_construct):
			std::cout << "The FragTrap " << this->name << " got created." << std::endl;
		break;
		case(msg_deconstruct):
			std::cout << "FragTrap " << this->name << " went home  "<<std::endl;
		break;
		case(msg_equal):
			std::cout << "FragTrap" << this->name << "information got overwritten" << std::endl;
		break;
		case(msg_guard):
			std::cout << "FragTrap " << this->name << " is in guarding the gate" << std::endl;
		break;
		case(msg_high_five):
			std::cout << "FragTrap " << this->name << " is in need of physical touch" << std::endl;
		break;
		default:
			std::cout << this->name << " didnt got a message for this action" << std::endl;
		break;
	}

}

void	FragTrap::print_action(e_msg msg, std::string add)
{
	switch(msg)
	{
		case(msg_attack):
			std::cout << "FragTrap " << this->name << " attacks " << add << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
		break;
		default:
			std::cout << this->name << " didnt got a message for this action" << std::endl;
		break;
	}
}

void	FragTrap::print_action(e_msg msg, unsigned int add)
{
	switch(msg)
	{
		case(msg_takeDmg):
			std::cout << "FragTrap " << this->name << " took "  << add<< " points of damage!" << std::endl;
		break;
		case(msg_repaired):
			std::cout << "FragTrap " << this->name << " is healed by " << add << " Hitpoint" << std::endl;
		break;
		default:
			std::cout << this->name << " didnt got a message for this action" << std::endl;
		break;
	}
}

// this is just here to pass the eval.
void	FragTrap::attack(const std::string& target)
{
	if (this->EnergyCheck() || this->HealthCheck())
		return ;
	this->Energy_points--;
	this->print_action(msg_attack, target);
}

void	FragTrap::highFivesGuys( void )
{
	if (this->EnergyCheck() || this->HealthCheck())
		return ;
	print_action(msg_high_five);
}

FragTrap::FragTrap()
{
	std::cout << "Frag "<< this << std::endl;
	this->name = "\"FragTrap\"";
	this->Hit_points = 100;
	this->Attack_damage = 30;
	this->Energy_points = 100;
	print_action(msg_default_construct);
}

FragTrap::FragTrap(std::string name) : name(name)
{
	this->Hit_points = 100;
	this->Attack_damage = 30;
	this->Energy_points = 100;
	print_action(msg_string_construct);
}

FragTrap::FragTrap(const FragTrap &a)
{
	this->name = a.name;
	this->Attack_damage = a.Attack_damage;
	this->Energy_points = a.Energy_points;
	this->Hit_points = a.Hit_points;
	print_action(msg_copy_construct);	
}

FragTrap::~FragTrap()
{
	print_action(msg_deconstruct);
}

FragTrap& FragTrap::operator= (const FragTrap& a)
{
	this->Attack_damage = a.Attack_damage;
	this->Energy_points = a.Energy_points;
	this->Hit_points = a.Hit_points;
	this->name = a.name;
	print_action(msg_equal);
	return (*this);	
}

