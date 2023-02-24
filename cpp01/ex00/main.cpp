
#include	"Zombie.h"
#include	<iostream>

void	*not_main()
{
	Zombie* z_ptr = newZombie("Dumdum");
	randomChump("Starvy");
	z_ptr->announce();
	return((void *) z_ptr);
}

/**
 * @brief This will create a segfault 
 * 
 */
// void	*not_main_fail()
// {
// 	Zombie zomberg("Cutiepie");
// 	Zombie* z_ptr = &zomberg;
// 	randomChump("Starvy");
// 	z_ptr->announce();
// 	return((void *) z_ptr);
// }

int	main()
{
	Zombie* z_ptr = (Zombie *)not_main();
	z_ptr->announce();
	randomChump("Granny");
	delete(z_ptr);
}