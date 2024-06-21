#include "HumanA.h"

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << "\n";
}

HumanA::HumanA(std::string name, Weapon& weap) : name(name), weapon(weap)
{
}

HumanA::~HumanA()
{
}
