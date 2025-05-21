
#ifndef POINT_HPP_
# define POINT_HPP_

#include "Fixed.hpp"
class Point {
	public:
		Point();
		Point(const Point &other);
		Point(const float x, const float y);
		Point &operator=(const Point &rhs);
		const Fixed getX() const;
		const Fixed getY() const;
		~Point();

	private:
		Fixed const x;
		Fixed const y;
};

#endif // POINT_HPP_

