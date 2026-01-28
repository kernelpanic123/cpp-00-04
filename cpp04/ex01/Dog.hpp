#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

	private:

		Brain *big_brain;

	public:

		Dog();
		Dog(std::string name);
		Dog(const Dog &other);
		Dog &operator =(const Dog &other);
		void makeSound(void) const;
		~Dog();
};


#endif