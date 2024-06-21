#include "Sed.h"
#include <sstream>
#include <string>

std::string	Sed::do_replace(std::stringstream& ss)
{
	std::stringstream result;
	std::string str = ss.str();
	size_t	pos = 0;
	size_t	last_pos = 0;

	while ((pos = str.find(rep, last_pos)) != std::string::npos)
	{
		result << str.substr(last_pos, pos - last_pos);
		result << with;
		last_pos = pos + rep.length();
	}
	result << str.substr(last_pos);
	return result.str();
}

void	Sed::run(void)
{
	std::ifstream in(file);
	if (!in)
	{
		std::cerr << "error opening file " << file << "\n";
		return ;
	}
	std::ofstream out(file_out);
	if (!out)
	{
		std::cerr << "error opening file " << file_out << "\n";
		return ;
	}
	std::stringstream ss;
	ss << in.rdbuf();
	in.close();
	out << do_replace(ss);
	out.close();
}

Sed::Sed(std::string filename, std::string rep, std::string with) : file(filename), rep(rep), with(with)
{
}

Sed::~Sed()
{
}
