#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	std::cout << "--WrongCat default constructor called." << std::endl;
	this->type_ = "Wrong cat";
}

WrongCat::WrongCat(WrongCat &src)
{
	std::cout << "--WrongCat copy constructor called." << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "--WrongCat destructor called." << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &src)
{
	this->type_ = src.type_;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "huh? (Wrong cat noise)" << std::endl;
}
