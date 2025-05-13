
#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->nbr = 0;
	return;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->nbr = src.getRawBits();
	return(*this);
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->nbr);
}

void Fixed::setRawBits( int const raw )
{
	this->nbr = raw;
}
