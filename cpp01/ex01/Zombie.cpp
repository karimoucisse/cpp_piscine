#include "Zombie.hpp"

Zombie::Zombie(void){return;}

Zombie::~Zombie(void){
	std::cout << this->name << " is dead !" << std::endl;
	return;
}
void Zombie::setName(std::string name){
	this->name = name;
}


void Zombie::announce( void ){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
