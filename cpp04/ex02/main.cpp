#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const AAnimal *newDog = new Dog();
	const AAnimal *newCat = new Cat();
	std::cout << newDog->getType() << " " << std::endl;
	std::cout << newCat->getType() << " " << std::endl;
	newDog->makeSound();
	newCat->makeSound();

	delete newDog;
	delete newCat;
	return 0;
}
