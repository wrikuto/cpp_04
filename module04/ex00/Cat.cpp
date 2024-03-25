#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "--Cat default constructor called." << std::endl;
	this->type_ = "Cat";
}

Cat::Cat(Cat const &src)
{
	std::cout << "--Cat copy constructor called." << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "--Cat destructor called." << std::endl;
}

Cat	&Cat::operator=(Cat const &src)
{
	this->type_ = src.type_;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "myaaah" << std::endl;
}
