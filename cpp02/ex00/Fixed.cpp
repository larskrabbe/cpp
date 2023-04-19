
#include	"Fixed.hpp"
#include	<iostream>


void	Fixed::_setRawBits( const int num)
{
	std::cout << "setRawsBits("<< num <<")" << "for address = " << this << std::endl;
	this->_value = num;
}

int		Fixed::_getRawBits( void ) const
{
	std::cout << "getRawsBits("<< this->_value <<")" << "from address = " << this << std::endl;
	return (this->_value);
}

Fixed::Fixed(): _value(0)
{
	std::cout << "Construct(Default) Fixed_Class at address = " << this << std::endl;
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Construct(Copy) Fixed_Class at address = " << this << std::endl;
	*this = a;
}

Fixed::~Fixed()
{
	std::cout << "Deconstruct Fixed_Class at address = " << this << std::endl;
}

Fixed& Fixed::operator= (const Fixed& a)
{
	std::cout << "Copy assignment operator called of address = " << this << " equeal address = " << &a << std::endl;
	this->_value = a._getRawBits();
	return (*this);
}
