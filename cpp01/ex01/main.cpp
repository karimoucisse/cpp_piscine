#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void)
{
	int N = 7;
	Zombie *zombies = zombieHorde(N, "John");

	for(int i = 0; i < N; i++)
		zombies->announce();

	delete [] zombies;
}
