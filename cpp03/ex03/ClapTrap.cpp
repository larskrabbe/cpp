
#include	"ClapTrap.hpp"
#include	<iostream>
#include	<string>
#include	<stdlib.h>
#include	<stdio.h>

void	ClapTrap::print_action(e_msg msg)
{
	switch(msg)
	{
		case(msg_default_construct):
			std::cout << "A ClapTrap " << " got created." << std::endl;
		break;
		case(msg_copy_construct):
			std::cout << "ClapTrap " << this->name << " got cloned" << std::endl;
		break;
		case(msg_no_energy):
			std::cout << "ClapTrap " << this->name << " has no Energy left" << std::endl;
		break;
		case(msg_no_health):
			std::cout << "ClapTrap " << this->name << " needs a  Screwdriver "<< std::endl;
		break;
		case(msg_string_construct):
			std::cout << "The ClapTrap " << this->name << " got created." << std::endl;
		break;
		case(msg_deconstruct):
			std::cout << "ClapTrap " << this->name << " went home  "<<std::endl;
		break;
		case(msg_equal):
			std::cout << "ClapTrap" << this->name << "information got overwritten" << std::endl;
		break;
		default:
			std::cout << this->name << " didnt got a message for this action" << std::endl;
		break;
	}

}

void	ClapTrap::print_action(e_msg msg, std::string add)
{
	switch(msg)
	{
		case(msg_attack):
			std::cout << "ClapTrap " << this->name << " attacks " << add << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
		break;
		default:
			std::cout << this->name << " didnt got a message for this action" << std::endl;
		break;
	}
}

void	ClapTrap::print_action(e_msg msg, unsigned int add)
{
	switch(msg)
	{
		case(msg_takeDmg):
			std::cout << "ClapTrap " << this->name << " took "  << add<< " points of damage!" << std::endl;
		break;
		case(msg_repaired):
			std::cout << "ClapTrap " << this->name << " is healed by " << add << " Hitpoint" << std::endl;
		break;
		default:
			std::cout << this->name << " didnt got a message for this action" << std::endl;
		break;
	}
}

bool	ClapTrap::EnergyCheck( void )
{
	if (this->Energy_points <= 0)
	{
		print_action(msg_no_energy);
		return (1);
	}
	return (0);
}

bool	ClapTrap::HealthCheck( void )
{
	if (this->Hit_points <= 0)
	{
		this->print_action(msg_no_health);
		return (1);
	}
	return (0);
}

ClapTrap::ClapTrap()
{
	std::cout << "Clap "<< this << std::endl;
	this->name = "\"ClapTrap\"";
	this->Hit_points = 10;
	this->Attack_damage = 0;
	this->Energy_points = 10;
	this->print_action(msg_default_construct);
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
	this->Hit_points = 10;
	this->Attack_damage = 0;
	this->Energy_points = 10;
	this->print_action(msg_string_construct);
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
	this->name = a.name;
	this->Attack_damage = a.Attack_damage;
	this->Energy_points = a.Energy_points;
	this->Hit_points = a.Hit_points;
	this->print_action(msg_copy_construct);
}

ClapTrap::~ClapTrap()
{
	this->print_action(msg_deconstruct);
}

void	ClapTrap::attack( const std::string& target )
{
	if (this->EnergyCheck() || this->HealthCheck())
		return ;
	this->Energy_points--;
	this->print_action(msg_attack, target);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->EnergyCheck() || this->HealthCheck())
		return ;
	this->Hit_points -= amount;
	this->print_action(msg_takeDmg, amount);
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyCheck() || this->HealthCheck())
		return ;
	this->Hit_points += amount;
	this->print_action(msg_repaired, amount);
}
