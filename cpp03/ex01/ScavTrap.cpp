#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :ClapTrap()
{
	std::cout << "Constructor Called !!" << std::endl;
}
ScavTrap::ScavTrap(std::string newName) :ClapTrap(newName)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Constructor Called !!" << std::endl;
}
ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
	*this = copy;
}
ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	this->_name = other._name;
	this->_attackDamage = other._attackDamage;
	this->_energyPoints = other._energyPoints;
	this->_hitPoints = other._hitPoints;

	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor Called !!" << std::endl;
}

void guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode !!" << std::endl;
}
