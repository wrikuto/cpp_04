#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimak default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string name)
:name_(name)
{
	std::cout << "WrongAnimal constructor called." << std::endl;
}

