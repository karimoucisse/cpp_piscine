#include <iostream>
#include <string>
#include <sstream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int get_oldest_contact_index(Contact *contacts)
{
	int i = 0;
	int j = 0;
	while(!contacts[i].first_name.empty())
	{
		i++;
		if(contacts[i].time < contacts[j].time)
			j = i;
	}
	return (j);
}
void PhoneBook::putdata(Contact contact)
{
	int i = 0;
	while(!this->contacts[i].first_name.empty())
	{
		i++;
	}
	if(i > 8)
		i = get_oldest_contact_index(this->contacts);
	this->contacts[i] = contact;
	return;
}

void del_space(std::string str)
{
	int i = 0;
	int len = str.length() - 1;
	while(str[i] == ' ')
		i++;
	str.erase(0, i);
	while(str[len] == ' ')
		len--;
	if(len != (int)str.length() - 1)
		str.erase(len, str.length() - 1);
}

int find_contact(std::string str, Contact *contacts)
{
	if(str.empty())
	{
		std::cout << "\033[31m incorrect should be 'SEARCH + index'\033[0m" << std::endl;
		return -1;
	}
	int i = 0;
	int len = str.length() - 1;
	while(str[i] == ' ')
		i++;
	str.erase(0, i);
	while(str[len - 1] == ' ')
		len--;
	str.erase(len, str.length() - 1);
	if(str.empty())
	{
		std::cout << "\033[31m incorrect should be 'SEARCH + index'\033[0m" << std::endl;
		return -1;
	}
	int a = str.find_first_not_of("0123456789");
	if(a != -1)
	{
		std::cout << str << "\033[31m is an incorrect index, there should be only number [0123456789]\033[0m" << std::endl;
		return -1;
	}
	int num;
    std::istringstream(str) >> num;
	if(num > 7 || num < 0 || contacts[num].first_name.empty())
	{
		std::cout << "\033[31m contact not find\033[0m" << std::endl;
		return -1;
	}
	return (num);
}

void print_string(std::string str)
{
	if (str.length() <= 10)
		std::cout << str << std::endl;
	else
	{
		str.erase(9, str.length() - 1);
		std::cout << str << '.' << std::endl;
	}
}

void PhoneBook::printdata(std::string str)
{
	int index = find_contact(str, this->contacts);
	if(index != -1)
	{
		std::cout << index << std::endl;
		std::cout << '|' << std::endl;
		print_string(this->contacts[index].first_name);
		std::cout << '|' << std::endl;
		print_string(this->contacts[index].last_name);
		std::cout << '|' << std::endl;
		print_string(this->contacts[index].nickname);
	}
}
