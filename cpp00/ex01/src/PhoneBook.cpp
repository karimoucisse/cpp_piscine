#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "stdlib.h"

PhoneBook::PhoneBook(void)
{
	this->_current_index = 0;
	this->_max_contact = 8;
	return ;
}

PhoneBook::~PhoneBook(void){return;};

void PhoneBook::add_contact_to_list(Contact *contact)
{
	if(this->_current_index +1 <= this->_max_contact)
		this->_contacts[_current_index] = *contact;
	else
		this->_contacts[_current_index % this->_max_contact] = *contact;
	this->_current_index++;
	return;
}

int is_only_white_space(std::string str)
{
	int len = 0;
	for(int i = 0; str[i]; i++)
	{
		if(isspace(str[i]))
			len++;
	}
	if(len == (int)str.length())
		return (1);
	return (0);
}

void assign_value(std::string msg, std::string *var)
{
	while((*var).empty() || is_only_white_space(*var))
	{
		std::cout << msg;
		getline(std::cin, *var);
	}
}

void PhoneBook::create_contact(void)
{
	Contact contact;
	std::string test;
	assign_value("First name: ", &contact.first_name);
	assign_value("Last name: ", &contact.last_name);
	assign_value("Nickname: ", &contact.nickname);
	assign_value("Phone number: ", &contact.phone_number);
	assign_value("Darkest secret: ", &contact.darkest_secret);
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

std::string trim_str(std::string str)
{
	int start = 0;
	while(isspace(str[start]))
		start++;
	int end = str.length() - 1;
	while(isspace(str[end]))
		end--;
	return (str.substr(start, end - start + 1));
}

std::string string_format(std::string str)
{
	std::string trimed_str = trim_str(str);
	if(trimed_str.length() > 10)
	{
		trimed_str.erase(9, trimed_str.length() - 1);
		trimed_str.push_back('.');
	}
	return trimed_str;
}

void PhoneBook::_print_contact(int index) const
{
	Contact contact;

	contact = this->_contacts[index - 1];
	if (system("cls"))
		system("clear");
	std::cout << "First name: " << contact.first_name << std::endl;
	std::cout << "Last name: " << contact.last_name << std::endl;
	std::cout << "Nickname: " << contact.nickname << std::endl;
	std::cout << "Phone number: " << contact.phone_number << std::endl;
	std::cout << "Darkest secret: " << contact.darkest_secret << std::endl;
}

void PhoneBook::_print_contacts(void) const
{
	set_list_header("index", "first name", "last name", "nickname");
	int nbr_contact = this->_current_index > this->_max_contact ? this->_max_contact : this->_current_index;
	for(int i = 0; i < nbr_contact; i++)
	{
		std::cout << std::setw(10) << i + 1 << '|';
		std::cout << std::setw(10) << string_format(this->_contacts[i].first_name) << '|';
		std::cout << std::setw(10) << string_format(this->_contacts[i].last_name) << '|';
		std::cout << std::setw(10) << string_format(this->_contacts[i].nickname) << '|' << std::endl;
	}
}

void PhoneBook::search_contact(void) const
{
	std::string str = "";
	int nbr_contact = this->_current_index > this->_max_contact ? this->_max_contact : this->_current_index;
	int index;
	_print_contacts();
	std::cout << "enter index: ";
	getline(std::cin, str);
	if(!str.empty() && str.length() == 1 && str.find_first_not_of("12345678"))
	{
		index = str[0] - '0';
		if(index <= 0 || index > nbr_contact)
			std::cout << "Contact with index " << index << " doesn't exist" << std::endl;
		else
			_print_contact(index);
	}
	else
		std::cout << str << " is not a valid index, index should be a number between 1 - 8 !" << std::endl;
}
