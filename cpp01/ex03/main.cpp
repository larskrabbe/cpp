
#include	"Weapon.hpp"
#include	"HumanA.hpp"
#include	"HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon();
		HumanA alpha("Apple Jack",club);
		alpha.attack();
		club.setType("Apple on a stick");
		alpha.attack();
	}
	{
		Weapon gun = Weapon("Gun");
		HumanB beta("Bert das Brot");
		beta.attack();
		beta.setWeapon(gun);
		gun.setType("shoe");
		beta.attack();
	}
}