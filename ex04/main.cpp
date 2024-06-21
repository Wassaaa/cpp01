#include "Sed.h"

int	main(int argc, char **argv)
{
	if (argc != 4)
		return 1;
	Sed sed(argv[1], argv[2], argv[3]);
	sed.run();
}
