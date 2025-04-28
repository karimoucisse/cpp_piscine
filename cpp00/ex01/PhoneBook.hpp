#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook{
	public:
		Contact contacts[8];
		void putdata(Contact contact);
		void printdata(std::string num);
};

#endif
