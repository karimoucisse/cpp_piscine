
#include "Dog.hpp"

// Default constructor
Dog::Dog() : AAnimal(), _brain(new Brain()) {
	this->type = "Dog";
	std::cout << "Dog Class Default constructor called" << std::endl;
	return;
}

// Copy constructor
Dog::Dog(const Dog &other) : AAnimal() {
  *this = other;
  std::cout << "Dog Class Copy constructor called" << std::endl;
  return;
}

// Copy assignment overload
Dog &Dog::operator=(const Dog &rhs) {
	this->type = rhs.type;
	return *this;
}

void Dog::makeSound() const
{
  std::cout << "Wouff" << std::endl;
}

// Default destructor
Dog::~Dog() {
	std::cout << "Dog Class destructor called" << std::endl;
	delete _brain;
	return;
}

