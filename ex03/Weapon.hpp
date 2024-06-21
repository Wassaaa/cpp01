#include <iostream>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string new_type);
	~Weapon();
	void				setType(std::string new_type);
	const std::string&	getType(void);
};
#endif
