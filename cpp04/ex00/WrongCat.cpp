
#include	"WrongCat.hpp"
#include	<iostream>

void	WrongCat::makeSound()
{
	std::cout << "Bitch" << std::endl;
}


WrongCat::WrongCat()
{
	std::cout << "construct WrongCat" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &a)
{
	this->type = a.type;
	std::cout << "construct WrongCat" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "deconstruct WrongCat" << std::endl;
}

WrongCat& WrongCat::operator= (const WrongCat& a)
{
	this->type = a.type;
	return (*this);
}
