
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

////////////////////////////////////////////////////////////////////////////////

Fixed Fixed::operator+(Fixed const& b)
{
	Fixed newFixed = Fixed(this->toFloat() + b.toFloat());
	return (newFixed);
}

Fixed Fixed::operator-(Fixed const& b)
{
	Fixed newFixed = Fixed(this->toFloat() - b.toFloat());
	return (newFixed);
}
Fixed Fixed::operator*(Fixed const& b)
{
	Fixed newFixed = Fixed(this->toFloat() * b.toFloat());
	return (newFixed);
}
Fixed Fixed::operator/(Fixed const& b)
{
	Fixed newFixed = Fixed(this->toFloat() / b.toFloat());
	return (newFixed);
}

///////////////////////////////////////////////////////////////////////////

bool Fixed::operator>(Fixed const& b) const
{
	return (this->getRawBits() > b.getRawBits());
}
bool Fixed::operator<(Fixed const& b) const
{
	return (this->getRawBits() < b.getRawBits());
}
bool Fixed::operator>=(Fixed const& b) const
{
	return (this->getRawBits() >= b.getRawBits());
}
bool Fixed::operator<=(Fixed const& b) const
{
	return (this->getRawBits() <= b.getRawBits());
}
bool Fixed::operator==(Fixed const& b) const
{
	return (this->getRawBits() == b.getRawBits());
}
bool Fixed::operator!=(Fixed const& b) const
{
	return (this->getRawBits() != b.getRawBits());
}

/////////////////////////////////////////////////////////////////////////

Fixed &Fixed::operator++() //++a
{
	fixedVal++;
	return (*this);
}
Fixed &Fixed::operator--() //--a
{
	fixedVal--;
	return (*this);
}
Fixed Fixed::operator++(int) //a++
{
	Fixed temp = *this;
	fixedVal++;
	return (temp);
}
Fixed Fixed::operator--(int) //a--
{
	Fixed temp = *this;
	fixedVal--;
	return (temp);
}

/////////////////////////////////////////////////////////////////////////////

Fixed Fixed::min(Fixed &a, Fixed &b)
{
	return a.getRawBits() > b.getRawBits() ? b : a;
}
Fixed Fixed::min(Fixed const &a, Fixed const &b)
{
	return a.getRawBits() > b.getRawBits() ? b : a;
}
Fixed Fixed::max(Fixed &a, Fixed &b)
{
	return a.getRawBits() < b.getRawBits() ? b : a;
}
Fixed Fixed::max(Fixed const &a, Fixed const &b)
{
	return a.getRawBits() < b.getRawBits() ? b : a;
}
