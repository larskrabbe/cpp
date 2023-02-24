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
	std::cout << this->name << " left the scope ! ! !" <<  std::endl;
}

