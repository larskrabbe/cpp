
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main( )
{
	Cat* ptr = new Cat;
	// WrongAnimal* wptr = new WrongCat;
	WrongAnimal test;
	test.makeSound();
	// wptr->WrongAnimal::makeSound();
	ptr->makeSound();
	// delete(wptr);
	delete(ptr);
}