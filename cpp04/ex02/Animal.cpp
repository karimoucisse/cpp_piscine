
#include "Animal.hpp"

// Default constructor
AAnimal::AAnimal() {
	std::cout << "Animal Class default constructor called" << std::endl;
	return;
}

// Copy constructor
AAnimal::AAnimal(const AAnimal &other) {
  *this = other;
  std::cout << "Animal Class copy constructor called" << std::endl;
  return;
}

// Copy assignment overload
AAnimal &AAnimal::operator=(const AAnimal &rhs) {
  this->type = rhs.getType();
  return *this;
}

std::string AAnimal::getType(void) const
{
  return (this->type);
}

// Default destructor
AAnimal::~AAnimal() {
	std::cout << "Animal Class destructor called" << std::endl;
	return;
}

