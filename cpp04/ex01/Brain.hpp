#ifndef BRAIN_H
#define BRAIN_H

#include <string>
#include <iostream>

class Brain
{
	private:

		std::string ideas[100];
	
	public :

		Brain();
		Brain &operator =(const Brain &other);
		Brain(const Brain &other);
		~Brain();
};

#endif