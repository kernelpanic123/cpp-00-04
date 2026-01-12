#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	if (argc < 2)
	{
		std::cout << "Wrong format, maybe try INFO, DEBUG, WARNING, ERROR" << std::endl;
		return 0;
	}
	harl.complain(argv[1]);
	return 0;
}