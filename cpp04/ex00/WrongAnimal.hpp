#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <string>
#include <iostream>

class WrongAnimal
{
	protected :

		std::string _type;

	public:

		WrongAnimal();
		WrongAnimal(std::string name);
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator =(const WrongAnimal &other);
		void makeSound(void) const;
		~WrongAnimal();

};

#endif