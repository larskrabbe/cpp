#include	"Contact.hpp"

//fRST NAME: LAST NAME: N0CJNAME: PHONE NUMBER: AND DARJEST SECREt

static std::string get_input(std::string prompt = "no_prompt")
{

	std::string	buffer;
	while (buffer.length() == 0)
{		std::cout << "<\033[1;32m" + prompt + "\033[0m>";
		std::getline(std::cin, buffer);}
	return (buffer);
}

void Contact::fill_contact(void)
{
	this->first_name = get_input("First Name");
	this->last_name = get_input("Last Name");
	this->nick_name = get_input("Nickname");
	this->number = get_input("Phonenumber");
	this->secret = get_input("Darkest Secret");
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
	std::cout << "<\033[1;32mFull Contact Info\033[0m>" << std::endl;
	std::cout << "\033[1;32m First Name      : \033[0m" << this->first_name << std::endl;
	std::cout << "\033[1;32m Last Name       : \033[0m" << this->last_name << std::endl;
	std::cout << "\033[1;32m Nickname        : \033[0m" << this->nick_name << std::endl;
	std::cout << "\033[1;32m Phonenumber     : \033[0m" << this->number << std::endl;
	std::cout << "\033[1;32m Darkest Secrest : \033[0m" << this->secret << std::endl;
}

void Contact::print_contact(int index)
{
	std::string out_put = "         ";
	out_put.append(1, char(index + '0'));//needs atoi here to make it better
	out_put += "|";
	out_put += normlaize_string(this->first_name);
	out_put += "|";
	out_put += normlaize_string(this->last_name);
	out_put += "|";
	out_put += normlaize_string(this->nick_name);
	std::cout << out_put << std::endl;
}

Contact::Contact()
{

}

Contact::~Contact()

{

}
