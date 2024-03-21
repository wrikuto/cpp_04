#include <iostream>
#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "--Defuault animal constructor called." << std::endl;
}

Animal::Animal(std::string type)
:type_(type)
{
	std::cout << "--Animal constructor called." << std::endl; 
}

Animal::~Animal()
{
	std::cout << "--Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &src)
{
	this->type_ = src.type_;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "<< Animal sound >>" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type_);
}
