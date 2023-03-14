
#include "Dog.hpp"
#include "Cat.hpp"

int	main( void )
{
	Animal* ptr = new Cat;
	ptr->makeSound();
	delete(ptr);
}