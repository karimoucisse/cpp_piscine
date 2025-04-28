#include <iostream>
#include <ctime>
#include "PhoneBook.hpp"


void create_contact(Contact *contact)
{
	std::cout << "first name: ";
	std::cin >> contact->first_name ;
	std::cout << "last name: ";
	std::cin >> contact->last_name ;
	std::cout << "nickname: ";
	std::cin >> contact->nickname ;
	std::cout << "phone number: ";
	std::cin >> contact->phone_number ;
	std::cout << "darkest secret: ";
	std::cin >> contact->darkest_secret;
	contact->time = std::time(0);
}

int main (void)
{
	PhoneBook phoneBook;

	while(true)
	{
		std::string str = "";
		std::string num = "";
		Contact contact;
		std::cin >> str;
		if(str.compare("ADD") == 0)
		{
			create_contact(&contact);
			phoneBook.putdata(contact);
		}
		if(str.compare("SEARCH") == 0)
		{
			getline(std::cin, str);
			phoneBook.printdata(str);
		}
		if(str.compare("EXIT") == 0)
			break;
	}
	return 0;
}
