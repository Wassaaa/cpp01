#include "Harl.hpp"

Harl::LogLevel Harl::getLogLevel(std::string level)
{
	if (level == "DEBUG") return DEBUG;
	if (level == "INFO") return INFO;
	if (level == "WARNING") return WARNING;
	if (level == "ERROR") return ERROR;
	return (UNKNOWN);
}

void Harl::harl_filter(std::string level)
{
	switch (getLogLevel(level))
	{
	case DEBUG:
		debug();
		[[fallthrough]];
	case INFO:
		info();
		[[fallthrough]];
	case WARNING:
		warning();
		[[fallthrough]];
	case ERROR:
		error();
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		break;
	}
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n";
}

Harl::Harl()
{
}

Harl::~Harl()
{
}
