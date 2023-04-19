
#include	<string>
#include	"ScavTrap.hpp"

int	main( void )
{
	ScavTrap bot1("Marwin");
	bot1.attack("someone");
	bot1.attack("someone");
	bot1.attack("someone");
	bot1.attack("someone");
	bot1.attack("someone");
	bot1.attack("someone");
	bot1.attack("someone");
	bot1.attack("someone");
	bot1.attack("someone");
	bot1.attack("someone");
	bot1.attack("someone");
	bot1.attack("someone");
	bot1.attack("someone");
	bot1.takeDamage(200);
	bot1.takeDamage(2);
	bot1.takeDamage(2);
	bot1.beRepaired(1);
	bot1.takeDamage(2);
	bot1.takeDamage(2);
	bot1.takeDamage(2);
	bot1.takeDamage(2);
	bot1.guardGate();
	bot1.attack("no+one");
	return (0);
}