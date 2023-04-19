
#include	"Harl.hpp"
#include	<iostream>


#ifndef DEBUG_MSG
# define DEBUG_MSG "This is the debug msg"
#endif

#ifndef INFO_MSG
# define INFO_MSG "This is the Info msg"
#endif

#ifndef WARNING_MSG
# define WARNING_MSG "This is the Warning msg"
#endif

#ifndef ERROR_MSG
# define ERROR_MSG "This is the ERROR msg"
#endif

void	Harl::debug ( void )
{
	std::cout << DEBUG_MSG << std::endl;
}

void	Harl::info ( void )
{
	std::cout << INFO_MSG << std::endl;
}

void	Harl::warning ( void )
{
	std::cout << WARNING_MSG << std::endl;
}

void	Harl::error ( void )
{
	std::cout << ERROR_MSG << std::endl;
}

void	Harl::complain ( void )
{
	switch(min_level)
	{
		case(0):
			debug();
		case(1):
			info();
		case(2):
			warning();
		case(3):
			error();
			break;
		default:
		{
			std::cout << "Random Stuff. I don't care" << std::endl;
		}
	}
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
		{
			min_level = i;
			break;
		}
		i++;
	}
	this->member_ptr[0] = &Harl::debug;
	this->member_ptr[1] = &Harl::info;
	this->member_ptr[2] = &Harl::warning;
	this->member_ptr[3] = &Harl::error;
}

Harl::~Harl()
{

}