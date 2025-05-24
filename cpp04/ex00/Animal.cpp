
#include "Animal.hpp"

// Default constructor
Animal::Animal() {
	std::cout << "Animal Class default constructor called" << std::endl;
	return;
}

// Copy constructor
Animal::Animal(const Animal &other) {
  *this = other;
  std::cout << "Animal Class copy constructor called" << std::endl;
  return;
}

// Copy assignment overload
Animal &Animal::operator=(const Animal &rhs) {
  this->type = rhs.type;
  return *this;
}

void Animal::makeSound() const
{
  std::cout << "Grrrrr" << std::endl;
}

std::string Animal::getType(void) const
{
  return (this->type);
}

// Default destructor
Animal::~Animal() {
	std::cout << "Animal Class destructor called" << std::endl;
	return;
}

