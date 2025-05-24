#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string newName);
		ScavTrap(ScavTrap const &copy);
		ScavTrap &operator=(ScavTrap const &other);
		~ScavTrap();
		void guardGate();
};

#endif
