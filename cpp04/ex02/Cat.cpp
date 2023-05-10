#include	"Cat.hpp"
#include	<iostream>

void	Cat::makeSound()
{
	std::cout << "UwU" << std::endl;
}

Cat::Cat():AAnimal(),_Brain(new Brain())
{
	std::cout << "construct Cat" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &a):AAnimal(),_Brain(new Brain(*a._Brain))
{
	this->type = a.type;
	std::cout << "construct Cat" << std::endl;
}

Cat::~Cat()
{
	delete this->_Brain;
	std::cout << "deconstruct Cat" << std::endl;
}

Cat& Cat::operator= (const Cat& a)
{
	this->type = a.type;
	delete this->_Brain;
	this->_Brain = new Brain(*a._Brain);
	return (*this);
}

void	Cat::add_idea( std::string idea )
{
	this->_Brain->add_idea(idea);
}

void	Cat::print_ideas( void )
{
	this->_Brain->print_ideas();
}