#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iomanip>
#include <iostream>

class Zombie
{

private:

	std::string _name;

public:

	Zombie(void);
	~Zombie(void);
	
	void announce(void);
	void set_name(std::string tmp);
	std::string get_name(void);

};


#endif