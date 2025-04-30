#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void create_contact(void);
		void add_contact_to_list(Contact *contact);
		void search_contact(void) const;
	private:
		void _print_contacts(void) const;
		void _print_contact(int index) const ;
		int _current_index;
		int _max_contact;
		Contact _contacts[8];
};

#endif
