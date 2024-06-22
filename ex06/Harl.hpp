#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
public:
	Harl();
	~Harl();
	void harl_filter(std::string level);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	enum LogLevel
	{
		DEBUG,
		INFO,
		WARNING,
		ERROR,
		UNKNOWN
	};
	LogLevel getLogLevel(std::string level);
};

#endif
