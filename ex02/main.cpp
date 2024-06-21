#include <iostream>
#include <string>

int	main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string* stringPTR = &str;
	std::string& stringREF = str;
	std::cout << "ADDRESSES" << std::endl;
	std::cout << "addr:	" << &str << std::endl;
	std::cout << "ponter:	" << stringPTR << std::endl;
	std::cout << "ref:	"<< &stringREF << std::endl;
	std::cout << "VALUES" << std::endl;
	std::cout << "addr:	" << str << std::endl;
	std::cout << "ponter:	" << *stringPTR << std::endl;
	std::cout << "ref:	"<< stringREF << std::endl;
}
