
#include	<string>
#include	"DiamondTrap.hpp"

int	main( void )
{
	DiamondTrap bot1;
	bot1.attack("someone");
	bot1.takeDamage(29);
	bot1.highFivesGuys();
	bot1.takeDamage(200);
	bot1.whoAmI();
	bot1.attack("a random crow");
	return (0);
}