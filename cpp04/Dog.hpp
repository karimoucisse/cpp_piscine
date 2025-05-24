
#ifndef DOG_HPP_
#define DOG_HPP_

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &rhs);
		void makeSound() const;
		~Dog();
};

#endif

