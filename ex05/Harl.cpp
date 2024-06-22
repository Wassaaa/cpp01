#include "Harl.hpp"
#include <unordered_map>

void Harl::complain(std::string level)
{
	std::unordered_map<std::string, HarlMemFn> complaintMap = {
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error},
	};
	auto it = complaintMap.find(level);
	if (it != complaintMap.end())
		(this->*(it->second))();
	else
		std::cout << "invalid complaint level: '" << level << "'\n";
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

Harl::Harl()
{

}

Harl::~Harl()
{

}
