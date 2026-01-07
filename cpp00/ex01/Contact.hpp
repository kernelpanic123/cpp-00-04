#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include <iostream>
#include <iomanip>
#include <stdlib.h>

class Contact
{

private:

	std::string first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

public:

	Contact(void);
	~Contact(void);

	void set_first_name(std::string tmp);	
	void set_last_name(std::string tmp);	
	void set_nickname(std::string tmp);
	void set_phone_number(std::string tmp);
	void set_secret(std::string tmp);
	std::string get_first_name(void);
	std::string get_last_name(void);
	std::string get_nickname(void);
	std::string get_phone_number(void);
	std::string get_secret(void);
};

#endif