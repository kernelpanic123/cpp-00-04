#include "Phonebook.hpp"

int main(void)
{
	Phonebook repertory;

	std::string	input;

	while (1)
	{
		std::cout << "ENTER A COMMAND, (ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
				return (0);

		while (input.empty())
		{
			std::getline(std::cin, input);

			if (std::cin.eof())
				return (0);
		}
		if (input == "ADD")
			repertory.add();
			
		else if (input == "SEARCH")
			repertory.search();
		else if (input == "EXIT")
			break;
		else
			std::cout << "unknown command ???" << std::endl;
	}
	return 1;
}