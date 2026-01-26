#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

class Animal
{
	protected :

		std::string _type;

	public:

		Animal();
		Animal(std::string name);
		Animal(const Animal &other);
		Animal &operator =(const Animal &other);
		virtual void makeSound(void) const;
		virtual ~Animal();

};

#endif