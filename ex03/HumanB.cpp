#include "HumanB.h"

void	HumanB::attack(void)
{
	if(weapon)
		std::cout << name << " attacks with their " << weapon->getType() << "\n";
	else
		std::cout << name << " attacks with their hands \n";
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

HumanB::HumanB(std::string name) : name(name), weapon(nullptr)
{
}

HumanB::~HumanB()
{
}
