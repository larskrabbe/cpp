
#include	"Fixed.hpp"
#include	<iostream>

void	Fixed::_setRawBits( int num)
{
	this->_value = num;
}

int		Fixed::_getRawBits( void )
{
	return (this->_value);
}

float	Fixed::_toFloat( void ) const
{
	return ((float)this->_value / (1 << this->_frac));
}

int		Fixed::_toInt( void ) const
{
	return ((int)this->_value >> this->_frac);
}

Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::Fixed( int num )
{
	this->_value = num  << this->_frac;
}

Fixed::Fixed( float num )
{	
	this->_value =(int)roundf (num * (1 << this->_frac));
}

Fixed::Fixed(const Fixed &a) : _value(a._value)
{
	this->_value = a._value;
}

Fixed::~Fixed()
{
	
}

std::ostream& operator<< (std::ostream &os, const Fixed& a)
{
	os << a._toFloat();
	return (os);
}

Fixed & Fixed::operator= (const Fixed& a)
{
	this->_value = a._value;
	return (*this);
}
