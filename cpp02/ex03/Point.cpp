#include "Point.hpp"

Point::Point(): x(0), y(0){return;}

Point::Point(const float a, const float b):x(a), y(b){return;}

const Fixed Point::getX() const
{
	return (this->x);
}

const Fixed Point::getY() const
{
	return (this->y);
}

Point &Point::operator=(const Point &rhs)
{
	return (*this);
}

Point::Point(const Point &other) :x(0), y(0)
{
	*this = other;
}

Point::~Point(){return;}

