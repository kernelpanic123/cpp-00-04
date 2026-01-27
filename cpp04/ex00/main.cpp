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
	std::cout << cat->getType() << " is my type" << std::endl;
	std::cout << dog->getType() << " is my type" << std::endl;
	bad_animal->makeSound();
	bad_cat->makeSound();
	cat->makeSound();
	dog->makeSound();
	animal->makeSound();
	delete animal;
	delete dog;
	delete cat;
	delete bad_animal;
	delete bad_cat;
	return 0;
}