
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

void	Harl::complain ( std::string level )
{
	for (size_t i = 0; i < 4; i++)
		if (level == this->member_str[i])
			(this->*member_ptr[i])();
}

Harl::Harl()
	{
		this->member_ptr[0] = &Harl::debug;
		this->member_str[0] = "Debug";
		this->member_ptr[1] = &Harl::info;
		this->member_str[1] = "Info";
		this->member_ptr[2] = &Harl::warning;
		this->member_str[2] = "Warning";
		this->member_ptr[3] = &Harl::error;
	this->member_str[3] = "Error";
}

Harl::~Harl()
{

}