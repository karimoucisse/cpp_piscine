
#include "Fixed.hpp"
#include <math.h>

const int   Fixed::bits = 8;

// representation d'un nombre a virgule fixe:
	// fixed_value = float_value * (2^fractional_bits)

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->fixedVal = 0;
	return;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}


Fixed::Fixed(const int n) {
    std::cout << "Int constructor called" << std::endl;
    this->fixedVal = n << bits;
}

Fixed::Fixed(const float f) {
    std::cout << "Float constructor called" << std::endl;
    this->fixedVal = roundf(f * (1 << bits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedVal = src.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const {
	return (this->fixedVal);
}

void Fixed::setRawBits( int const raw )
{
	this->fixedVal = raw;
}

float   Fixed::toFloat(void) const {
    return (float)this->fixedVal / (1 << bits);
}

int     Fixed::toInt(void) const {
    return this->fixedVal >> bits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}
