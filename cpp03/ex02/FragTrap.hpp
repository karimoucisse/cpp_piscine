
#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap &other);
		FragTrap &operator=(const FragTrap &rhs);
		~FragTrap();

	private:

};

#endif

