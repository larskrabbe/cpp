
#include	"Contact.hpp"
#include	<iostream>
#include	<cctype>
#include	<string>

#define MAX_CONTACT 8

#ifndef PHONEBOOK
# define PHONEBOOK
class PhoneBook
{
	private:
		Contact entry[MAX_CONTACT];
		int		oldest;
		int		total;
	public:
				PhoneBook();
				~PhoneBook();
		void	add_contact(void);
		void	search_contact(void);
	// void	print_contact(Contact);
};	

#endif