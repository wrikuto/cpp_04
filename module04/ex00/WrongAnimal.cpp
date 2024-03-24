#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
:type_("Wrong animal")
{
	std::cout << "--WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &src)
{
	std::cout << "--WrongAnimal copy constructor called." << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "--WrongAnimal destructor called." << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &src)
{
	this->type_ = src.type_;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "T$^&#@$#&$<?@!? (Wrong animal noise)" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type_);
}
