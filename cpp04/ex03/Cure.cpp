
#include "Cure.hpp"

// Default constructor
Cure::Cure() {
	this->_type = "cure";
	std::cout << "Cure Class Default constructor called" << std::endl;
	return;
}

// Copy constructor
Cure::Cure(const Cure &other) {
	*this = other;
	std::cout << "Cure Class Copy constructor called" << std::endl;
	return;
}

// Copy assignment overload
Cure &Cure::operator=(const Cure &rhs) {
	this->_type = rhs.getType();
	return *this;
}

Cure *Cure::clone() const
{
	return new Cure();
}


// Default destructor
Cure::~Cure() {
	std::cout << "Cure Class Copy constructor called" << std::endl;
	return;
}

