
#include	"Zombie.h"
#include	<iostream>

#define N_2 2
#define NAME_2 "Der Jurgen"
#define N 5
#define NAME "Boaty McBoatface"
int	main()
{
	{
		Zombie* z_ptr = zombieHorde(N, NAME);
		for (int i = 0; i < N; i++)
		{
			z_ptr->announce();
		}
		delete [] z_ptr;
	}
	{
		Zombie* z_ptr = zombieHorde(N_2, NAME_2);
		for (int i = 0; i < N_2; i++)
		{
			z_ptr->announce();
		}
		delete [] z_ptr;
	}
}