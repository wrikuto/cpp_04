#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
:value_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int data)
:value_(data * (0b1 << this->bits_))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float data)
:value_(std::roundf(data * (0b1 << this->bits_)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed	&Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(src.value_);
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value_);
}

void	Fixed::setRawBits(int const raw)
{
	this->value_ = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value_ / (float)(0b1 << this->bits_));
}

int		Fixed::toInt(void) const
{
	return (this->value_ >> this->bits_);
}


std::ostream	&operator<<(std::ostream &stream, const Fixed &num)
{
	stream << num.toFloat();
	return (stream);
}
