#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat ceo("ex_CEO", 2);
		std::cout << ceo << std::endl;
		ceo.incrementgrade();
		std::cout << ceo << std::endl;
		ceo.incrementgrade();
	}

	catch (std::exception &e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat slave("slave", 149);
		std::cout << slave << std::endl;
		slave.decrementgrade();
		std::cout << slave << std::endl;
		slave.decrementgrade();
	}

	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}