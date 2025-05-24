
#include "Cat.hpp"

// Default constructor
Cat::Cat() : Animal(), _brain(new Brain())
{
	this->type = "Cat";
	std::cout << "Cat Class Default constructor called" << std::endl;
	return;
}

// Copy constructor
Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat Class Copy constructor called" << std::endl;
	*this = other;
	return;
}


// Copy assignment overload
Cat &Cat::operator=(const Cat &rhs) {
	this->type = rhs.type;
	return *this;
}

void Cat::makeSound() const
{
  std::cout << "Miaou" << std::endl;
}

// Default destructor
Cat::~Cat() {
	std::cout << "Cat Class destructor called" << std::endl;
	delete _brain;
	return;
}

