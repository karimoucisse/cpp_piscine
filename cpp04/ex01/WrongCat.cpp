
#include "WrongCat.hpp"

// Default constructor
WrongCat::WrongCat() : WrongAnimal() {
  this->type = "WrongCat";
	std::cout << "WrongCat Class Default constructor called" << std::endl;
  return; }

// Copy constructor
WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
  *this = other;
  return;
}

// Copy assignment overload
WrongCat &WrongCat::operator=(const WrongCat &rhs) {
  this->type = rhs.getType();
  return *this;
}

void WrongCat::makeSound() const
{
  std::cout << "Mmmmhh" << std::endl;
}

// Default destructor
WrongCat::~WrongCat() {
  std::cout << "WrongCat Class destructor called" << std::endl;
  return;
}

