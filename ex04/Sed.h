#ifndef SED_H
# define SED_H

# include <iostream>
# include <fstream>

class Sed
{
public:
	Sed(std::string file, std::string rep, std::string with);
	~Sed();
	void	run(void);

private:
	std::string		file;
	std::string		rep;
	std::string		with;
	const std::string file_out = "sed_out";
	std::string do_replace(std::stringstream& ss);
};

#endif
