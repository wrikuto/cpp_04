#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
:value_(0)
{
	#ifdef MSG
		std::cout << "Default constructor called" << std::endl;
	#endif
}

Fixed::Fixed(const int data)
:value_(data * (0b1 << this->bits_))
{
	#ifdef MSG
		std::cout << "Int constructor called" << std::endl;
	#endif
}

Fixed::Fixed(const float data)
:value_(std::roundf(data * (0b1 << this->bits_)))
{
	#ifdef MSG
		std::cout << "Float constructor called" << std::endl;
	#endif
}

Fixed::Fixed(const Fixed &src)
{
	#ifdef MSG
		std::cout << "Copy constructor called" << std::endl;
	#endif
	*this = src;
}

Fixed	&Fixed::operator=(const Fixed &src)
{
	#ifdef MSG
		std::cout << "Copy assignment operator called" << std::endl;
	#endif
	this->setRawBits(src.value_);
	return (*this);
}

Fixed::~Fixed()
{
	#ifdef MSG
		std::cout << "Destructor called" << std::endl;
	#endif
}

// utils -------------------------------------------------
int		Fixed::getRawBits() const
{
	#ifdef MSG
		std::cout << "getRawBits member function called" << std::endl;
	#endif
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


// operator funcs --------------------------------------
bool	Fixed::operator>(const Fixed &num)
{
	return (this->value_ > num.getRawBits());
}

bool	Fixed::operator<(const Fixed &num)
{
	return (this->value_ < num.getRawBits());
}

bool	Fixed::operator>=(const Fixed &num)
{
	return (this->value_ >= num.getRawBits());
}

bool	Fixed::operator<=(const Fixed &num)
{
	return (this->value_ <= num.getRawBits());
}

bool	Fixed::operator==(const Fixed &num)
{
	return (this->value_ == num.getRawBits());
}

bool	Fixed::operator!=(const Fixed &num)
{
	return (this->value_ != num.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &num)
{
	return (Fixed(this->toFloat() + num.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &num)
{
	return (Fixed(this->toFloat() - num.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &num)
{
	return (Fixed(this->toFloat() * num.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &num)
{
	return (Fixed(this->toFloat() / num.toFloat()));
}

Fixed	&Fixed::operator++(void)
{
	this->value_ += 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);

	this->value_ += 1;
	return (temp);
}

Fixed	&Fixed::operator--(void)
{
	this->value_ -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);

	this->value_ -= 1;
	return (temp);
}

// get min max utils ---------------------------------
Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}

// ostream overload ------------------------------------
std::ostream	&operator<<(std::ostream &stream, const Fixed &num)
{
	stream << num.toFloat();
	return (stream);
}
