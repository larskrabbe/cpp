
#include	"Harl.hpp"
#include	<iostream>

#ifndef DEBUG_MSG
# define DEBUG_MSG "This is the debug msg"
#endif

#ifndef INFO_MSG
# define INFO_MSG "This is the info msg"
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

void	Harl::complain ( std::string level )
{
	if (level.empty() == true)
		return ;
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