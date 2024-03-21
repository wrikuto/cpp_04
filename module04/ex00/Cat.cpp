#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "--Cat default constructor called." << std::endl;
}

Cat::Cat(std::string name)
:cat_name_(name)
{
	std::cout << "--Cat constructor called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "--Cat destructor called." << std::endl;
}

Cat	&Cat::operator=(const Cat &src)
{
	this->cat_name_ = src.cat_name_;
	return (*this);
}

void		Cat::makeSound() const
{
	std::cout << "myaaah" << std::endl;
}

std::string	Cat::getType() const
{
	return (this->cat_name_);
}
