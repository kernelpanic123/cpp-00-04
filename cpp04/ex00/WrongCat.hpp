#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:

		WrongCat();
		WrongCat(std::string name);
		WrongCat(const WrongCat &other);
		WrongCat &operator =(const WrongCat &other);
		void makeSound(void) const;
		~WrongCat();
};


#endif