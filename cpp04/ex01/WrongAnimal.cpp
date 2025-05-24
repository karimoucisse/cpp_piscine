
#include "WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal() {
  std::cout << "WrongAnimal Class constructor called" << std::endl;
  return;
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &other) {
  std::cout << "WrongAnimal Class copy constructor called" << std::endl;
  *this = other;
  return;
}

// Copy assignment overload
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
  this->type = rhs.getType();
  return *this;
}

void WrongAnimal::makeSound() const
{
  std::cout << "hisss hisss!" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
  return (this->type);
}

// Default destructor
WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal Class destructor called" << std::endl;
  return;
}

