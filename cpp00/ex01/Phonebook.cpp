#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->_index = 0;
	this->_nb_contact = 0;
}
Phonebook::~Phonebook(void)
{
	
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
std::string check_length(std::string input)
{
	if (input.length() > 10)
		return input.substr(0 ,9) + '.';
	else
		return (input);
}
int is_valid_index(std::string input)
{

	if (input.empty())
		return 0;
	
	for (size_t i = 0; i < input.length(); i++)
	{
		if (!std::isdigit(input[i]))
			return 0;
	}
	return 1;
}
void Phonebook::search(void)
{
	if (this->_nb_contact == 0)
	{
		std::cout << "No contact for the moment try ADD one" << std::endl;
		return ;
	}
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;

	for (int i = 0; i < _nb_contact; i++)
	{
		std::cout << "|" << std::setw(10) << i;

		std::cout << "|" << std::setw(10) << check_length(this->_contact[i].get_first_name());

		std::cout << "|" << std::setw(10) << check_length(this->_contact[i].get_last_name());

		std::cout << "|" << std::setw(10) << check_length(this->_contact[i].get_nickname()) << "|" << std::endl;
	}
	std::cout << "Which index ?" << std::endl;
	std::string index_input;
	std::getline(std::cin, index_input);

	if (is_valid_index(index_input) == 0)
	{
		std::cout << "ERROR INDEX NOT A NUMBER" << std::endl;
	}
	else
	{
		int index = std::atoi(index_input.c_str());

		if (index >= 0 && index < _nb_contact)
		{
			std::cout << "First name: " << this->_contact[index].get_first_name() << std::endl;
			std::cout << "Last name: " << this->_contact[index].get_last_name() << std::endl;
			std::cout << "Nickname: " << this->_contact[index].get_nickname() << std::endl;
			std::cout << "Phone_number: " << this->_contact[index].get_phone_number() << std::endl;
			std::cout << "Darkest secret: " << this->_contact[index].get_secret() << std::endl;

		}
		else
		{
			std::cout << "Error index out of range" << std::endl;
		}
	}
}