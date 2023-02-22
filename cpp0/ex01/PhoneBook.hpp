
#include	"Contact.hpp"
#include	<iostream>
#include	<cctype>
#include	<string>

#ifndef PHONEBOOK
# define PHONEBOOK
class PhoneBook
{
	private:
		Contact entry[7];
		int		last;
	public:
				PhoneBook();
				~PhoneBook();
		void	add_contact(void);
	// void	print_contact(Contact);
};	

#endif