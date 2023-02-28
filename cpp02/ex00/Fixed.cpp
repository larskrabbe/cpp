
#include	"Fixed.hpp"



void	Fixed::_setRawBits( int num)
{
	this->_value = num;
}

int		Fixed::_getRawBits( void )
{
	return (this->_value);
}

Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::Fixed(const Fixed &a) : _value(a._value)
{
	this->_value = a._value;
}

Fixed::~Fixed()
{
	
}

Fixed & Fixed::operator= (const Fixed& a)
{
	this->_value = a._value;
	return (*this);
}
