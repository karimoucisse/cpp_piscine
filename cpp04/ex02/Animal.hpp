
#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>

class AAnimal {
	public:
		AAnimal();
		AAnimal(const AAnimal &other);
		AAnimal &operator=(const AAnimal &rhs);
		virtual ~AAnimal();
		virtual void makeSound() const = 0;
		std::string getType(void) const;
	protected:
		std::string type;
};

#endif

