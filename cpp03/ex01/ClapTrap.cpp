#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "Empty";
	this->_attackDamage = 0;
	this->_energyPoints = 10;
	this->_hitPoints = 10;
	std::cout << "Constructor Called !!" << std::endl;
}
ClapTrap::ClapTrap(std::string n)
{
	this->_name = n;
	this->_attackDamage = 0;
	this->_energyPoints = 10;
	this->_hitPoints = 10;
	std::cout << "Constructor Called !!" << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
}
ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	this->_name = other._name;
	this->_attackDamage = other._attackDamage;
	this->_energyPoints = other._energyPoints;
	this->_hitPoints = other._hitPoints;

	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor Called !!" << std::endl;
}
void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->_name
	<< " attacks " << target << ", causing "
	<< this->_attackDamage << " points of damage!" << std::endl;
	// if(this->_energyPoints > 0 && this->_hitPoints > 0)
	// {
	// 	target._hitPoints -= this->_attackDamage;
	// 	this->_energyPoints--;
	// }
}
void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
}
