#include "Zombie.hpp"
#include <iostream>

void	Zombie::announce(void)
{
	std::cout << this->name  << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
}

Zombie::Zombie(std::string z_name) : name(z_name)
{
}

Zombie::~Zombie()
{
	std::cout << this->name << " got away ! ! !" <<  std::endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}