#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->_index = 0;
	this->_nb_contact = 0;
}

void Phonebook::add(void)
{
	std::string input;
	
	std::cout << "first name" << std::endl;
	std::getline(std::cin, input);
	while (input.empty())
	{
		std::cout << "cant put an empty string !!!!!!!!!!!!!!" << std::endl;
		std::getline(std::cin, input);

		//ctrl-D
		if (std::cin.eof())
			return ;
	}
	this->_contact[this->_index].set_first_name(input);

	std::cout << "last name" << std::endl;
	std::getline(std::cin, input);
	while (input.empty())
	{
		std::cout << "cant put an empty string !!!!!!!!!!!!!!" << std::endl;
		std::getline(std::cin, input);

		if (std::cin.eof())
			return;
	}
	this->_contact[this->_index].set_last_name(input);

	std::cout << "nickname" << std::endl;
	std::getline(std::cin, input);
	while (input.empty())
	{
		std::cout << "cant put an empty string !!!!!!!!!!!!!!" << std::endl;
		std::getline(std::cin, input);

		if (std::cin.eof())
			return ;
	}
	this->_contact[this->_index].set_nickname(input);

	std::cout << "phone_number" << std::endl;
	std::getline(std::cin, input);
	while (input.empty())
	{
		std::cout << "cant put an empty string !!!!!!!!!!!!!!" << std::endl;
		std::getline(std::cin, input);

		if (std::cin.eof())
			return ;
	}
	this->_contact[this->_index].set_phone_number(input);

	std::cout << "darkest_secret" << std::endl;
	std::getline(std::cin, input);
	while (input.empty())
	{
		std::cout << "cant put an empty string !!!!!!!!!!!!!!" << std::endl;
		std::getline(std::cin, input);

		if (std::cin.eof())
			return ;
	}
	this->_contact[this->_index].set_secret(input);

	_index++;
	if (_index > 7)
		_index = 0;
	if (this->_nb_contact < 8)
		this->_nb_contact++;
}