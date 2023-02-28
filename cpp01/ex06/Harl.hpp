
#ifndef CLASS_Harl
# define CLASS_Harl

#include	<string>

class Harl
{
	private:
		void			debug( void );
		void			info( void );
		void			warning( void );
		void			error( void );
		void			empty_func( void );
		void			(Harl::* member_ptr[4])( void );
		std::string		member_str[4];
	public:
		void			complain( std::string ignore );
		Harl(std::string ignore = "Debug");
		~Harl();
};

#endif

