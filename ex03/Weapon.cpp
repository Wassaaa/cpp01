#include "Weapon.hpp"

const std::string& Weapon::getType(void)
{
	return type;
}

void	Weapon::setType(std::string new_type)
{
	this->type = new_type;
}

Weapon::Weapon()
{

}

Weapon::Weapon(std::string new_type) : type(new_type)
{
}

Weapon::~Weapon()
{
}
