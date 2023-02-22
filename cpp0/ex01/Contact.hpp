
#include	<iostream>
#include	<cctype>
#include	<string>

#ifndef CONTACT
# define CONTACT

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string number;
		std::string secret;
	public:
					Contact(/* args */);
					~Contact();
		void	fill_contact();
		void	print_contact(int index);
};

#endif