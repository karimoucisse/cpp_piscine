#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weaponA(weapon)
{
	this->name = name;
	return;
}
HumanA::~HumanA(){
	return;
}

void HumanA::attack() const{
	std::string const str = this->weaponA.getType();
	std::cout << this->name << " attacks with their "
		<< str
		<< std::endl;
}
