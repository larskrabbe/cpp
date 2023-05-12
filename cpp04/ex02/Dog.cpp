#include	"Dog.hpp"
#include	<iostream>

void	Dog::makeSound() const
{
	std::cout << "UwU" << std::endl;
}

Dog::Dog():AAnimal(), _Brain(new Brain())
{
	std::cout << "construct Dog" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &a):AAnimal(), _Brain(new Brain(*a._Brain))
{
	this->type = a.type;
	std::cout << "construct Dog" << std::endl;
}

Dog::~Dog()
{
	delete this->_Brain;
	std::cout << "deconstruct Dog" << std::endl;
}

Dog& Dog::operator= (const Dog& a)
{
	this->type = a.type;
	delete this->_Brain;
	this->_Brain = new Brain(*a._Brain);
	return (*this);
}

void	Dog::add_idea( std::string idea )
{
	this->_Brain->add_idea(idea);
}

void	Dog::print_ideas( void )
{
	this->_Brain->print_ideas();
}