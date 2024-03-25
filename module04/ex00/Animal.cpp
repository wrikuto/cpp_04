#include <iostream>
#include "Animal.hpp"

Animal::Animal()
:type_("Animal")
{
	std::cout << "--Animal defuault constructor called." << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "--Animal copy constructor called." << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "--Animal destructor called." << std::endl;
}

Animal	&Animal::operator=(Animal const &src)
{
	std::cout << "--Animal operator overload called." << std::endl;
	this->type_ = src.type_;
	return (*this);
}

std::string	Animal::getType() const
{
	return (this->type_);
}

void	Animal::makeSound() const
{
	std::cout << "Animal noise" << std::endl;
}

