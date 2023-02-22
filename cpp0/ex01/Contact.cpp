#include	"Contact.hpp"

//fRST NAME: LAST NAME: N0CJNAME: PHONE NUMBER: AND DARJEST SECREt

static std::string get_input(std::string prompt = "no_prompt")
{
	std::string	buffer;

	std::cout << "<\033[1;32m" << prompt << "\033[0m>";
	std::cin >> buffer;
	return (buffer);
}

void Contact::fill_contact(void)
{
	std::string	buffer;
	this->first_name = get_input("First Name");
	this->last_name = get_input("Last Name");
	this->nick_name = get_input("Nickname");
	this->number = get_input("Phonenumber");
	this->secret = get_input("Darkest Secret");
	print_contact();
}

static std::string normlaize_string(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	while (str.length() < 10)
		str.insert(0," ");
	return (str);
}		

void Contact::print_contact()
{
	normlaize_string(this->first_name);
	std::cout << this->first_name << std::endl;
}

Contact::Contact()
{

}

Contact::~Contact()

{

}
