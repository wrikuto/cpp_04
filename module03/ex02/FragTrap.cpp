#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{
	std::cout << "--FragTrap deafault constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
:ClapTrap(name)
{
	std::cout << "--FragTrap constructor called" << std::endl;
	this->hp_ = FragTrap::frag_hp_;
	this->ep_ = FragTrap::frag_ep_;
	this->atk_ = FragTrap::frag_atk_;
}

FragTrap::FragTrap(const FragTrap &src)
{
	*this = src;
	std::cout << "--FragTrap copy constructor called." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "--FragTrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	if (this != &src)
	{
		this->name_ = src.name_;
		this->hp_ = src.hp_;
		this->ep_ = src.ep_;
		this->atk_ = src.atk_;
	}
	return (*this);
}

void	FragTrap::attack(const std::string &target)
{
	if (this->hp_ <= 0 || this->ep_ <= 0)
	{
		if (this->hp_ <= 0)
			std::cout << "FragTrap is out of hit points!" << std::endl;
		else
			std::cout << "FragTrap is out of energy points!" << std::endl;
		return;
	}
	std::cout \
		<< "FragTrap " << this->name_ << " attacks " << target \
		<< " causing " << this->atk_ << " points of damage!"  \
		<< std::endl;
	this->ep_ -= 1;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap has requested high fives!" << std::endl;
}
