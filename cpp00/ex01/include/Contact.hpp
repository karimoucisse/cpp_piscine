#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <ctime>
class Contact{
	public:
		Contact(void);
		~Contact(void);
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

#endif
