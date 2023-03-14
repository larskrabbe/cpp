

#include	"Animal.hpp"
#include	<iostream>

void	Animal::makeSound()
{
	std::cout << "" << this->sound << std::endl;
}

Animal::Animal()
{
	std::cout << "construct Animal" << std::endl;
}

Animal::Animal(const Animal &a)
{
	this->type = a.type;
	std::cout << "construct Animal" << std::endl;
}

Animal::~Animal()
{
	std::cout << "deconstruct Animal" << std::endl;
}

Animal& Animal::operator= (const Animal& a)
{
	this->type = a.type;
	return (*this);
}
