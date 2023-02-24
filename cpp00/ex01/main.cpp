
#include	"PhoneBook.hpp"
#include	"Contact.hpp"
#include	<iostream>
#include	<cctype>
#include	<string>

//Valid Commands
void	valid_command()
{
	std::cout << "ADD : to add a Contact"  << std::endl;
	std::cout << "SEARCH : "  << std::endl;
	std::cout << "EXIT : to end the process"  << std::endl;

}

int main()
{
	std::string	str;
	PhoneBook	book;
	while (1)
	{
		valid_command();
		std::getline(std::cin, str);
		if (str.compare("EXIT") == 0)
			break ;
		if (str.compare("ADD") == 0)
			book.add_contact();
		if (str.compare("SEARCH") == 0)
			book.search_contact();
	}
	
}