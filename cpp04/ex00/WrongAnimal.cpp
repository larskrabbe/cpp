

#include	"WrongAnimal.hpp"
#include	<iostream>

void	WrongAnimal::makeSound()
{
	std::cout << "Never gonna give you up" << std::endl;
}

WrongAnimal::WrongAnimal()
{
	std::cout << "construct WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
	this->type = a.type;
	std::cout << "construct WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "deconstruct WrongAnimal" << std::endl;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& a)
{
	this->type = a.type;
	return (*this);
}
