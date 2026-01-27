#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{

	public:

		Cat();
		Cat(std::string name);
		Cat(const Cat &other);
		Cat &operator =(const Cat &other);
		void makeSound(void) const;
		~Cat();
};

#endif