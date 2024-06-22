#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <unordered_map>

class Harl
{
public:
	Harl();
	~Harl();
	void complain(std::string level);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	typedef void (Harl::*HarlMemFn)(void);
	std::unordered_map<std::string, HarlMemFn> complaintMap;

};

#endif
