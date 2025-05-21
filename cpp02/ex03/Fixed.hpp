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

		Fixed operator+(Fixed const& b);
		Fixed operator-(Fixed const& b);
		Fixed operator*(Fixed const& b);
		Fixed operator/(Fixed const& b);

		bool operator>(Fixed const& b) const;
		bool operator<(Fixed const& b) const;
		bool operator>=(Fixed const& b) const;
		bool operator<=(Fixed const& b) const;
		bool operator==(Fixed const& b) const;
		bool operator!=(Fixed const& b) const;

		Fixed &operator++();
		Fixed &operator--();
		Fixed operator++(int i);
		Fixed operator--(int i);

		static Fixed min(Fixed &a, Fixed &b);
		static Fixed min(Fixed const &a, Fixed const &b);
		static Fixed max(Fixed &a, Fixed &b);
		static Fixed max(Fixed const &a, Fixed const &b);
	private:
		int fixedVal;
		static const int bits;
};
std::ostream &operator<<(std::ostream &o, Fixed const &obj);


#endif

