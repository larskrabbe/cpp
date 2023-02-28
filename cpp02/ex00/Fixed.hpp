
#ifndef CLASS_Fixed
# define CLASS_Fixed

class Fixed
{
	private:
		int 				_value;
		static const int	_frac = 8;
	public:
		int					_getRawBits( void );
		void				_setRawBits( int );
		Fixed();
		Fixed(const Fixed &a);
		~Fixed();
		Fixed &operator= (const Fixed& a);
};

#endif
