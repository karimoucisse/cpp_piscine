#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	const WrongAnimal *newWrongAnimal = new WrongAnimal();
	const WrongAnimal *newWrongCat = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << newWrongCat->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	newWrongAnimal->makeSound();
	newWrongCat->makeSound();
	return 0;
}
