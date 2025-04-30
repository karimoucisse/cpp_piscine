#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "stdlib.h"

PhoneBook::PhoneBook(void)
{
	this->current_index = 0;
	this->max_contact = 8;
	return ;
}

PhoneBook::~PhoneBook(void){return;};

void PhoneBook::add_contact_to_list(Contact *contact)
{
	if(this->current_index +1 <= this->max_contact)
		this->contacts[current_index] = *contact;
	else
		this->contacts[current_index % this->max_contact] = *contact;
	this->current_index++;
	return;
}

void assign_value(std::string msg, std::string *var)
{
	while((*var).empty())
	{
		std::cout << msg;
		getline(std::cin, *var);
	}
}

void PhoneBook::create_contact(void)
{
	Contact contact;
	std::string test;
	assign_value("first name: ", &contact.first_name);
	assign_value("last name: ", &contact.last_name);
	assign_value("nickname: ", &contact.nickname);
	assign_value("phone number: ", &contact.phone_number);
	assign_value("darkest secret: ", &contact.darkest_secret);
	add_contact_to_list(&contact);
	if (system("cls"))
		system("clear");
	std::cout << "Contact created !" << std::endl;
	return ;
}

void set_list_header(std::string h1, std::string h2, std::string h3, std::string h4)
{
	std::cout << std::setw(10) << h1 << '|';
	std::cout << std::setw(10) << h2 << '|';
	std::cout << std::setw(10) << h3 << '|';
	std::cout << std::setw(10) << h4 << '|' << std::endl;
}

void PhoneBook::print_contact(int index)
{
	Contact contact;

	contact = this->contacts[index - 1];
	std::cout << "first name: " << contact.first_name << std::endl;
	std::cout << "last name: " << contact.last_name << std::endl;
	std::cout << "nickname: " << contact.nickname << std::endl;
	std::cout << "phone number: " << contact.phone_number << std::endl;
	std::cout << "darkest secret: " << contact.darkest_secret << std::endl;
}

void PhoneBook::print_contacts(void)
{
	set_list_header("index", "first name", "last name", "nickname");
	int nbr_contact = this->current_index > this->max_contact ? this->max_contact : this->current_index;
	for(int i = 0; i < nbr_contact; i++)
	{
		std::cout << std::setw(10) << i + 1 << '|';
		std::cout << std::setw(10) << this->contacts[i].first_name << '|';
		std::cout << std::setw(10) << this->contacts[i].last_name << '|';
		std::cout << std::setw(10) << this->contacts[i].nickname << '|' << std::endl;
	}
}

void PhoneBook::search_contact(void)
{
	std::string str = "";
	int nbr_contact = this->current_index > this->max_contact ? this->max_contact : this->current_index;
	int index;
	print_contacts();
	std::cout << "enter index: ";
	getline(std::cin, str);
	if(!str.empty() && str.length() == 1 && str.find_first_not_of("12345678"))
	{
		index = str[0] - '0';
		if(index <= 0 || index > nbr_contact)
			std::cout << "Contact with index " << index << " doesn't exist" << std::endl;
		else
			print_contact(index);
	}
	else
		std::cout << str << "is not a valid index, index should be a number between 1 - 8 !" << std::endl;
}
