
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

bool Fixed::operator> ( const Fixed& other )
{
	return (this->_value > other._value);
}
bool Fixed::operator>= ( const Fixed& other )
{
	return (this->_value >= other._value);
}

bool Fixed::operator< ( const Fixed& other )
{
	return (this->_value < other._value);
}

bool Fixed::operator<= ( const Fixed& other )
{
	return (this->_value <= other._value);
}

bool Fixed::operator== ( const Fixed& other )
{
	return (this->_value == other._value);
}

bool Fixed::operator!= ( const Fixed& other )
{
	return (this->_value != other._value);
}

Fixed Fixed::operator + (const Fixed& other) const
{
	Fixed tmp;
	tmp._setRawBits(this->_value + other._value);
	return (tmp);
}

Fixed Fixed::operator - (const Fixed& other) const
{
	Fixed tmp;
	tmp._setRawBits(this->_value - other._value);
	return (tmp);
}

Fixed Fixed::operator * (const Fixed& other) const
{
	return (Fixed(this->_toFloat() * other._toFloat()));
}

Fixed Fixed::operator / (const Fixed& other) const
{
	return (Fixed(this->_toFloat() / other._toFloat()));
}

Fixed& Fixed::operator ++ ()
{
	this->_value++;
	return (*this);
}

Fixed& Fixed::operator -- ()
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed tmp(*this);
	++tmp._value;
	return (tmp);
}

Fixed Fixed::operator -- (int)
{
	Fixed tmp(*this);
	--tmp._value;
	return (tmp);
}
std::ostream& operator<< (std::ostream &os, const Fixed& a)
{
	os << a._toFloat();
	return (os);
}

Fixed& Fixed::operator = (const Fixed& a)
{
	this->_value = a._value;
	return (*this);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	Fixed tmp;
	if (a._value < b._value)
		return(a);
	return(b);
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	Fixed tmp;
	if (a._value > b._value)
		return(a);
	return(b);
}

Fixed&  min( Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed&  max( Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}
