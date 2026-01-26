#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	const WrongAnimal *bad_animal = new WrongAnimal();
	const WrongAnimal *bad_cat = new WrongCat();
	//std::cout << j->getType() << " " << std::endl;
	//std::cout << i->getType() << " " << std::endl;
	bad_animal->makeSound();
	bad_cat->makeSound();
	cat->makeSound();
	dog->makeSound();
	animal->makeSound();
	return 0;
}