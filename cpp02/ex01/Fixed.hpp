
#ifndef CLASS_Fixed
# define CLASS_Fixed

#include	<fstream>

class Fixed
{
	private:
		int					_value;
		static const int	_frac = 8;
	public:
		int					_getRawBits( void ) const;
		void				_setRawBits( int bits);
		float				_toFloat( void ) const;
		int					_toInt( void ) const;
		
		Fixed( const int num );
		Fixed( const float );
		Fixed( const Fixed &a );
		Fixed( );
		
		~Fixed();
		Fixed & operator= ( const Fixed& a );
};

std::ostream& operator<< (std::ostream &os, const Fixed& a);
#endif
