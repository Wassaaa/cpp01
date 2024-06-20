#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string new_name)
{
	this->name = new_name;
}

Zombie::~Zombie()
{
	std::cout << this->name <<  " has been destroyed!\n";
}

