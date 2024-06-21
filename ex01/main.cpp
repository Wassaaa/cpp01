#include "Zombie.hpp"

int	main()
{
	int N = 10;

	Zombie *z1 = zombieHorde(N, "Al");

	for (int i = 0; i < N; i++)
		z1[i].announce();
	delete[] z1;
	return 0;
}
