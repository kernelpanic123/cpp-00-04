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
	Zombie(std::string name);
	void set_name(std::string name);
	std::string get_name(void);
	void announce(void);
	

};

Zombie* newZombie(std::string name);
void randomChump( std::string name);
#endif