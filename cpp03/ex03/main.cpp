
#include	<string>
#include	"FragTrap.hpp"

int	main( void )
{
	FragTrap bot1("Marwin");
	bot1.attack("someone");
	bot1.takeDamage(29);
	bot1.highFivesGuys();
	bot1.takeDamage(200);
	bot1.attack("a random crow");
	return (0);
}