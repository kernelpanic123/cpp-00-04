#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:

		Brain *small_brain;

	public:

		Cat();
		Cat(std::string name);
		Cat(const Cat &other);
		Cat &operator =(const Cat &other);
		void makeSound(void) const;
		~Cat();
};

#endif