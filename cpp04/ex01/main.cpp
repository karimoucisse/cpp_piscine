#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	int nbrAnimal = 8;
	Animal *AnimalTab = new Animal[nbrAnimal];

	for(int i = 0; i < nbrAnimal; ++i)
	{
		if(i < nbrAnimal/2)
			AnimalTab[i] = Dog();
		else
			AnimalTab[i] = Cat();
	}
	delete[] AnimalTab;
}
