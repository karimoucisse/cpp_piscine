#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void create_contact(void);
		void add_contact_to_list(Contact *contact);
		void search_contact(void);
	private:
		void print_contacts(void);
		void print_contact(int index);
		int current_index;
		int max_contact;
		Contact contacts[8];
};

#endif
