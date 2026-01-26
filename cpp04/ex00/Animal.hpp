#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

class Animal
{
	protected :

		std::string type;

	public:

		Animal();
		Animal(const Animal &other);
		Animal &operator =(const Animal &other);
		~Animal();
};

#endif