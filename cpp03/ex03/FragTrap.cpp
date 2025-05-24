#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Constructor Called !!" << std::endl;
}
FragTrap::FragTrap(std::string newName)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Constructor Called !!" << std::endl;
}
FragTrap::FragTrap(FragTrap const &copy)
{
	*this = copy;
}
FragTrap &FragTrap::operator=(FragTrap const &other)
{
	this->_name = other._name;
	this->_attackDamage = other._attackDamage;
	this->_energyPoints = other._energyPoints;
	this->_hitPoints = other._hitPoints;

	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor Called !!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "hight-fives request !!" << std::endl;
}
