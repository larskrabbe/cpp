
#include "Dog.hpp"
#include "Cat.hpp"

int	main( )
{
	// Dog kitty;
	// kitty.add_idea("Food");
	// kitty.add_idea("Food");
	// kitty.add_idea("Starwars");
	// kitty.add_idea("Balls");
	// kitty.add_idea("Space");
	// kitty.add_idea("Food");
	// kitty.print_ideas();
	// Dog pus;
	// pus = kitty;
	// pus.print_ideas();
	Animal* ptr[10];
	for (size_t i = 0; i < 5; i++)
	{
		ptr[i] = new Cat;
	}
	for (size_t i = 5; i < 10; i++)
	{
		ptr[i] = new Dog;
	}	
	for (size_t i = 0; i < 10; i++)
	{
		delete ptr[i];
	}
	
 }