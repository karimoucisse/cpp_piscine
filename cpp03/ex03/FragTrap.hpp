
#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string newName);
		FragTrap(const FragTrap &other);
		FragTrap &operator=(const FragTrap &rhs);
		void highFivesGuys(void);
		~FragTrap();

	private:

};

#endif

