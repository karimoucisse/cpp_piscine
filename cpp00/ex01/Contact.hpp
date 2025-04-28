#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <ctime>
class Contact{
	public:
		Contact(void);
		std::string first_name;
		std::string last_name;
		std::string nickname;
		int phone_number;
		std::string darkest_secret;
		std::time_t time;
		// ~Contact(void);
};

#endif
