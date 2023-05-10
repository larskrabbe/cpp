
#include "Dog.hpp"
#include "Cat.hpp"

int	main( )
{
	// Dog::AAnimal a;
	// AAnimal b;
	Dog kitty;
	kitty.add_idea("Food");
	kitty.add_idea("Food");
	kitty.add_idea("Starwars");
	kitty.add_idea("Balls");
	kitty.add_idea("Space");
	kitty.add_idea("Food");
	kitty.print_ideas();
	Dog pus;
	pus = kitty;
	pus.print_ideas();
}