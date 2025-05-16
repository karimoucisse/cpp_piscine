#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>
class Fixed {
	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		Fixed(const Fixed &src);
		Fixed &operator=(const Fixed &src);
		float toFloat( void ) const;
		int toInt( void ) const;
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	private:
		int fixedVal;
		static const int bits;
};
std::ostream &operator<<(std::ostream &o, Fixed const &obj);

#endif

