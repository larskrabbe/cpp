
#ifndef CLASS_Harl
# define CLASS_Harl

#include	<string>

class Harl
{
	private:
		int				ignore;
		void			debug( void );
		void			info( void );
		void			warning( void );
		void			error( void );
		void			(Harl::* member_ptr[4])( void );
		std::string		member_str[4];
	public:
		void			complain( void );
		Harl(int ignore = 1);
		~Harl();
};

#endif

