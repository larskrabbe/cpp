
#include	"WrongCat.hpp"
#include	<iostream>

void	WrongCat::makeSound()
{
	std::cout << "Wrong cat try to do noises" << std::endl;
}


WrongCat::WrongCat():WrongAnimal()
{
	std::cout << "construct WrongCat" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &a):WrongAnimal()
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
