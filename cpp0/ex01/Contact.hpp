
#include	<iostream>
#include	<cctype>
#include	<string>

#ifndef CONTACT
# define CONTACT

class Contact
{
	private:
		std::string name;
	public:
					Contact(/* args */);
					~Contact();
		void	fill_contact();
};

#endif