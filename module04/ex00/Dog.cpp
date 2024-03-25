#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "--Dog default constructor called." << std::endl;
	this->type_ = "Dog";
}

Dog::Dog(Dog const &src)
{
	std::cout << "--Dog copy constructor called." << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "--Dog destructor called." << std::endl;
}

Dog	&Dog::operator=(const Dog &src)
{
	this->type_ = src.type_;
	return (*this);
}

void		Dog::makeSound() const
{
	std::cout << "wanwan" << std::endl;
}
