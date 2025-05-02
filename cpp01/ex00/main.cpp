#include "Zombie.hpp"

void randomChump( std::string name );
Zombie* newZombie( std::string name );
int main()
{
	randomChump("John");
	Zombie *new_zombie = newZombie("Pierre");
	delete new_zombie;
}
