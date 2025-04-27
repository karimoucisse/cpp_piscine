#include <iostream>
#include "PhoneBook.hpp"

int main (void)
{
	PhoneBook phoneBook;

	phoneBook.contacts[0].first_name = "Karimou";
	std::cout << phoneBook.contacts[0].first_name << std::endl;
	return 0;
}
