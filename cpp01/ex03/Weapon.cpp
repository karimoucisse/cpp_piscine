#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return;
}

Weapon::Weapon(std::string str)
{
	this->type = str;
	return;
}
Weapon::~Weapon(void)
{
	return;
}

std::string const &Weapon::getType(void) const{
	return this->type;
}

void Weapon::setType(std::string str){
	this->type = str;
}
