
#include	"Fixed.hpp"
#include	<iostream>

void	Fixed::_setRawBits( int num)
{
	std::cout << "setRawsBits("<< num <<")" << "for address = " << this << std::endl;
	this->_value = num;
}

int		Fixed::_getRawBits( void ) const
{
	std::cout << "getRawsBits("<< this->_value <<")" << "from address = " << this << std::endl;
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
	std::cout << "Construct(Default) Fixed_Class at address = " << this << std::endl;
	this->_value = 0;
}

Fixed::Fixed( int num )
{
	std::cout << "Construct(Int) Fixed_Class at address = " << this << std::endl;
	this->_value = num  << this->_frac;
}

Fixed::Fixed( float num )
{
	std::cout << "Construct(Float) Fixed_Class at address = " << this << std::endl;
	this->_value =(int)roundf (num * (1 << this->_frac));
}

Fixed::Fixed(const Fixed &a) : _value(a._value)
{
	std::cout << "Construct(Copy) Fixed_Class at address = " << this << std::endl;
	*this = a;
}

Fixed::~Fixed()
{
	std::cout << "Deconstruct Fixed_Class at address = " << this << std::endl;
}

std::ostream& operator<< (std::ostream &os, const Fixed& a)
{
	os << a._toFloat();
	return (os);
}

Fixed & Fixed::operator= (const Fixed& a)
{
	std::cout << "Copy assignment operator called of address = " << this << " equeal address = " << &a << std::endl;
	this->_value = a._getRawBits();
	return (*this);
}
