#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
	this->WeaponB = NULL;
	return ;
}
HumanB::~HumanB(){
	return ;
}
void HumanB::setWeapon(Weapon &weapon){
	this->WeaponB = &weapon;
}

void HumanB::attack() const{
	std::string const str = this->WeaponB->getType();
	std::cout << this->name << " attacks with their "
		<< str
		<< std::endl;
}
