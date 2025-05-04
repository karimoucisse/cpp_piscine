#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av){
	if(ac != 2)
	{
		std::cerr << "require 1 parameter" << std::endl;
		return (0);
	}
	Harl call;

	call.complain(av[1]);
}
