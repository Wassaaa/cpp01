#include "Zombie.hpp"

int	main()
{
	Zombie *z1 = newZombie("Aris");
	z1->announce();
	delete z1;

	randomChump("chump1");
	randomChump("chump2");
}
