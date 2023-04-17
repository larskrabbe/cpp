
#include	"Dog.hpp"
#include	<iostream>

void	Dog::makeSound()
{
	std::cout << "Wuff" << std::endl;
}

Dog::Dog()
{
	std::cout << "construct Dog" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &a)
{
	std::cout << "construct Dog" << std::endl;
	this->type = a.type;
}

Dog::~Dog()
{
	std::cout << "deconstruct Dog" << std::endl;
}

Dog& Dog::operator= (const Dog& a)
{
	this->type = a.type;
	return (*(this));
}
