#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "--Dog default constructor called." << std::endl;
}

Dog::Dog(std::string name)
:dog_name_(name)
{
	std::cout << "--Dog constructor called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "--Dog destructor called." << std::endl;
}

Dog	&Dog::operator=(const Dog &src)
{
	this->dog_name_ = src.dog_name_;
	return (*this);
}

void		Dog::makeSound() const
{
	std::cout << "WAON" << std::endl;
}

std::string	Dog::getType() const
{
	return (this->dog_name_);
}
