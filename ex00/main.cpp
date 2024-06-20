#include "Zombie.hpp"

int	main()
{
	Zombie *z1 = newZombie("Aris");
	z1->announce();
	z1->~Zombie();

	newZombie("Zomb2")->announce();

	randomChump("chump1");
	randomChump("chump2");
}
