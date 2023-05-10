
#include	"Cat.hpp"
#include	<iostream>

void	Cat::makeSound()
{
	std::cout << "UwU" << std::endl;
}


Cat::Cat():Animal()
{
	std::cout << "construct Cat" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &a):Animal()
{
	this->type = a.type;
	std::cout << "construct Cat" << std::endl;
}

Cat::~Cat()
{
	std::cout << "deconstruct Cat" << std::endl;
}

Cat& Cat::operator= (const Cat& a)
{
	this->type = a.type;
	return (*this);
}
