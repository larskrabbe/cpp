
#include	"Harl.hpp"
#include	<iostream>


void	Harl::debug ( void )
{
	std::cout << "debug" << std::endl;
}

void	Harl::info ( void )
{
	std::cout << "info" << std::endl;

}

void	Harl::warning ( void )
{
	std::cout << "warning" << std::endl;
}

void	Harl::error ( void )
{
	std::cout << "error" << std::endl;
}

// void	Harl::complain ( std::string level )
// {
// 	int j;
// 	for (size_t i = 0; i < 4; i++)
// 	if (level == this->member_str[i])
// 		j = i;
// 	switch(j)
// 	{
// 		case(1):
// 			(this->*member_ptr[0])();
// 		case(2):
// 			(this->*member_ptr[1])();
// 		case(3):
// 			(this->*member_ptr[2])();
// 		case(4):
// 			(this->*member_ptr[3])();
// 	}
// }

void	Harl::complain ( std::string level )
{
	for (size_t i = 0; i < 4; i++)
		if (level == this->member_str[i])
			(this->*member_ptr[i])();
}

void	Harl::empty_func (void)
{

}


Harl::Harl(std::string ignore)
{
	this->member_str[0] = "Debug";
	this->member_str[1] = "Info";
	this->member_str[2] = "Warning";
	this->member_str[3] = "Error";
	int i = 0;
	while (i < 4)
	{
		this->member_ptr[i] = &Harl::empty_func;
		if (ignore == this->member_str[i])
			break;
		i++;
	}
	switch(i)
	{
		case(0):
			this->member_ptr[0] = &Harl::debug;
		case(1):
			this->member_ptr[1] = &Harl::info;
		case(2):
			this->member_ptr[2] = &Harl::warning;
		case(3):
			this->member_ptr[3] = &Harl::error;
			break;
		default:
			{
				std::cout << "default" << std::endl;
			}
	}
}

Harl::~Harl()
{

}