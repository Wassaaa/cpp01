#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::set_name(std::string new_name)
{
	this->name = new_name;
	std::cout <<"Zombie name set to: " << new_name << "\n";
}

Zombie::Zombie(void)
{
	std::cout <<"Created a zombie\n";
}

Zombie::~Zombie()
{
	std::cout << name <<  " has been destroyed!\n";
}
