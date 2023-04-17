
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main( )
{
	Cat* ptr = new Cat;
	WrongAnimal* wptr = new WrongCat;
	wptr->makeSound();
	ptr->makeSound();
	delete(wptr);
	delete(ptr);
}