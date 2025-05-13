#ifndef FIXED_HPP_
#define FIXED_HPP_

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &src);
		Fixed &operator=(const Fixed &src);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	private:
		int nbr;
		static const int bits;
};

#endif

