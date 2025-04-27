#include <iostream>
#include "Test.hpp"

Test::Test(void)
{
	std::cout << "Constructor Called !" << std::endl;
	return ;
}

Test::~Test(void){
	std::cout << "Destructor Called !" << std::endl;
	return ;
}


