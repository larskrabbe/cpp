#include	"PhoneBook.hpp"


void PhoneBook::add_contact(void)
{
	std::cout << "Add New Contact" << std::endl;
	this->entry[this->oldest].fill_contact();
	this->oldest++;
	if (this->oldest >= MAX_CONTACT)
		this->oldest = 0;
	if (this->total < MAX_CONTACT)
		this->total++;
}

void PhoneBook::search_contact(void)
{
	if (this->total == 0)
	{
		std::cout << "\033[1;31mNo Contact Entry\033[0m" << std::endl;
		return ;
	}
	std::cout << "     Index|First Name| Last Name|  NickName" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	for (int i = 0; i < this->total; ++i)
	{
		this->entry[i].print_contact(i);
	}
	std::string buffer;
	while (1)
	{
		std::cout << "Select A Entry Between 0 And " << (this->total - 1) << std::endl;
		std::cin >> buffer;// need atoi here to improve
		if (buffer.length() != 1)
			std::cout << "\033[1;31mInvalid Index\033[0m" << std::endl;
		else if (buffer.at(0) - '0' > this->total)
			std::cout << "\033[1;31mIndex Outside Range\033[0m" << std::endl;
		else
		{
			this->entry[buffer.at(0) - '0'].print_contact();
			break;
		}
	}
}

PhoneBook::PhoneBook(/* args */)
{
	this->oldest = 0;
	this->total = 0;
}

PhoneBook::~PhoneBook()
{

}
