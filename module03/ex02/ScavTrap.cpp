#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "--ScavTrap deafault constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
:ClapTrap(name)
{
	std::cout << "--ScavTrap constructor called" << std::endl;
	this->hp_ = ScavTrap::scav_hp_;
	this->ep_ = ScavTrap::scav_ep_;
	this->atk_ = ScavTrap::scav_akt_;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;
	std::cout << "--ScavTrap copy constructor called." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "--ScavTrap destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &src)
{
	if (this != &src)
	{
		this->name_ = src.name_;
		this->hp_ = src.hp_;
		this->ep_ = src.ep_;
		this->atk_ = src.atk_;
	}
	std::cout << "--ScavTrap copy assignment operator called." << std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->hp_ <= 0 || this->ep_ <= 0)
	{
		if (this->hp_ <= 0)
			std::cout << "ScavTrap is out of hit points!" << std::endl;
		else
			std::cout << "ScavTrap is out of energy points!" << std::endl;
		return;
	}
	std::cout \
		<< "ScavTrap " << this->name_ << " attacks " << target \
		<< " causing " << this->atk_ << " points of damage!"  \
		<< std::endl;
	this->ep_ -= 1;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name_ << " is guarding a gate." << std::endl;
}
