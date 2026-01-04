#include "Contact.hpp"

void Contact::set_first_name(std::string tmp)
{
	first_name = tmp;
}

std::string Contact::get_first_name(void)
{
	return (first_name);
}
void Contact::set_last_name(std::string tmp)
{
	last_name = tmp;
}
std::string Contact::get_last_name(void)
{
	return (last_name);
}
void Contact::set_nickname(std::string tmp)
{
	nickname = tmp;
}
std::string Contact::get_nickname(void)
{
	return (nickname);
}
void Contact::set_phone_number(std::string tmp)
{
	phone_number = tmp;
}
std::string Contact::get_phone_number(void)
{
	return phone_number;
}
void Contact::set_secret(std::string tmp)
{
	darkest_secret = tmp;
}
std::string Contact::get_secret(void)
{
	return darkest_secret;
}
