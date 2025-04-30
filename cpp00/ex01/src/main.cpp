#include <iostream>
#include <ctime>
#include "PhoneBook.hpp"
#include "stdlib.h"



int main (void)
{
	PhoneBook phoneBook;

	while(true)
	{
		std::string str = "";
		Contact contact;
		getline(std::cin, str);
		if(str.compare("ADD") == 0)
			phoneBook.create_contact();
		else if(str.compare("SEARCH") == 0)
			phoneBook.search_contact();
		else if(str.compare("EXIT") == 0)
			break;
	}
	return 0;
}
