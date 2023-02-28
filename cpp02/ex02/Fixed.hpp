
#ifndef CLASS_Fixed
# define CLASS_Fixed

#include	<fstream>

class Fixed
{
	private:
		int					_value;
		static const int	_frac = 8;
	public:
		int					_getRawBits( void );
		void				_setRawBits( int );
		float				_toFloat( void ) const;
		int					_toInt( void ) const;
		
		Fixed( const int num );
		Fixed( const float );
		Fixed( const Fixed &a );
		Fixed( );
		
		~Fixed();
		Fixed& operator= ( const Fixed& other );

		bool operator > ( const Fixed& other );
		bool operator < ( const Fixed& other );
		bool operator >= ( const Fixed& other );
		bool operator <= ( const Fixed& other );
		bool operator == ( const Fixed& other );
		bool operator != ( const Fixed& other );

		Fixed operator + ( const Fixed& other ) const;
		Fixed operator - ( const Fixed& other ) const;
		Fixed operator * ( const Fixed& other ) const;
		Fixed operator / ( const Fixed& other ) const;

		Fixed& operator ++();
		Fixed& operator --();
		Fixed operator ++(int);
		Fixed operator --(int);

		static Fixed&	min( Fixed& a, Fixed& b);
		static Fixed&	max( Fixed& a, Fixed& b);
		static const Fixed&	min( const Fixed& a, const Fixed& b);
		static const Fixed&	max( const Fixed& a, const Fixed& b);
};

std::ostream& operator<< (std::ostream &os, const Fixed& a);
#endif
