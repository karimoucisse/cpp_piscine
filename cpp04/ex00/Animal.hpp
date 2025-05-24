
#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>

class Animal {
	public:
		Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &rhs);
		~Animal();
		virtual void makeSound() const;
		std::string getType(void) const;
	protected:
		std::string type;
};

#endif

