
#include "Ice.hpp"

// Default constructor
Ice::Ice() :AMateria()
{
	this->_type = "ice";
	std::cout << "Ice Class Default constructor called" << std::endl;
	return;
}

// Copy constructor
Ice::Ice(const Ice &other) {
	std::cout << "Ice Class copy constructor called" << std::endl;
	*this = other;
	return;
}

// Copy assignment overload
Ice &Ice::operator=(const Ice &rhs) {
  this->_type = rhs.getType();
  return *this;
}

Ice *Ice::clone() const
{
	return new Ice();
}

// Default destructor
Ice::~Ice() {
	std::cout << "Ice Class destructor called" << std::endl;
	return;
}

