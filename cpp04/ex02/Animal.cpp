

#include	"AAnimal.hpp"
#include	<iostream>
#include	"Brain.hpp"

void	AAnimal::makeSound()
{
	std::cout << "Never gonna give you up" << std::endl;
}

AAnimal::AAnimal()
{
	std::cout << "construct AAnimal" << std::endl;
}

AAnimal::AAnimal(const AAnimal &a)
{
	this->type = a.type;
	std::cout << "construct AAnimal" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "deconstruct AAnimal" << std::endl;
}

AAnimal& AAnimal::operator= (const AAnimal& a)
{
	this->type = a.type;
	return (*this);
}
