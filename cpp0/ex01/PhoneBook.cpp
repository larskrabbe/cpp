#include	"PhoneBook.hpp"


void PhoneBook::add_contact( void )
{
	std::cout << "Add New Contact" << std::endl;
	this->entry->fill_contact();
}

PhoneBook::PhoneBook(/* args */)
{
	this->last = 0;
}

PhoneBook::~PhoneBook()
{

}
