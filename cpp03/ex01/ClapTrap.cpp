
#include	"ClapTrap.hpp"
#include	<iostream>
#include	<string>
#include	<stdlib.h>
#include	<stdio.h>


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
		print_action(msg_no_health);
		return (1);
	}
	return (0);
}

ClapTrap::ClapTrap()
{
	this->name = "\"Bitch\"";
	this->Hit_points = 10;
	this->Attack_damage = 0;
	this->Energy_points = 10;
	print_action(msg_default_construct);
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
	this->Hit_points = 10;
	this->Attack_damage = 0;
	this->Energy_points = 10;
	print_action(msg_string_construct);
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
	this->name = a.name;
	this->Attack_damage = a.Attack_damage;
	this->Energy_points = a.Energy_points;
	this->Hit_points = a.Hit_points;
	print_action(msg_copy_construct);
}

ClapTrap::~ClapTrap()
{
	print_action(msg_deconstruct);
}

void	ClapTrap::attack( const std::string& target )
{
	if (this->EnergyCheck() || this->HealthCheck())
		return ;
	this->Energy_points--;
	print_action(msg_attack, target);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->EnergyCheck() || this->HealthCheck())
		return ;
	this->Hit_points -= amount;
	print_action(msg_takeDmg, amount);
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyCheck() || this->HealthCheck())
		return ;
	this->Hit_points += amount;
	print_action(msg_repaired, amount);
}

ClapTrap& ClapTrap::operator= (const ClapTrap& a)
{
	this->Attack_damage = a.Attack_damage;
	this->Energy_points = a.Energy_points;
	this->Hit_points = a.Hit_points;
	this->name = a.name;
	print_action(msg_equal);
	return (*this);
}
