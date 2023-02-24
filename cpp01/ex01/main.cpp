
#include	"Zombie.h"
#include	<iostream>

#define N 10
#define NAME "Der Jurgen"
int	main()
{
	Zombie* z_ptr = zombieHorde(N, NAME);
	for (int i = 0; i < N; i++)
	{
		z_ptr->announce();
	}
	delete [] z_ptr;
}