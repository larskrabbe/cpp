
#include	"PhoneBook.hpp"
#include	"Contact.hpp"
#include	<iostream>
#include	<cctype>
#include	<string>

int main()
{
	std::string	str;
	PhoneBook	book;
	while (1)
	{
		std::cin >> str;
		if (str.compare("EXIT") == 0)
			break ;
		if (str.compare("ADD") == 0)
			book.add_contact();
	}
	
}