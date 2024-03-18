#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "--ClapTrap deafault constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
:name_(name), hp_(clap_hp_), ep_(clap_ep_), atk_(clap_atk_)
{
	std::cout << "--ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
	std::cout << "--ClapTrap copy constructor called." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "--ClapTrap destructor called." << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &src)
{
	if (this != &src)
	{
		this->name_ = src.name_;
		this->hp_ = src.hp_;
		this->ep_ = src.ep_;
		this->atk_ = src.atk_;
	}
	std::cout << "--ClapTrap copy assignment operator called." << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hp_ <= 0 || this->ep_ <= 0)
	{
		if (this->hp_ <= 0)
			std::cout << "ClapTrap is out of hit points!" << std::endl;
		else
			std::cout << "ClapTrap is out of energy points!" << std::endl;
		return;
	}
	std::cout \
		<< "ClapTrap " << this->name_ << " attacks " << target \
		<< " causing " << this->atk_ << " points of damage!"  \
		<< std::endl;
	this->ep_ -= 1;
}

void	ClapTrap::takeDamage(int amount)
{
	if (hp_ <= 0)
	{
		std::cout << "CrapTrap " << this->name_ << " is out of hit points!" << std::endl;
		return ;
	}
	std::cout \
		<< "ClapTrap " << this->name_ \
		<< " takes " << amount << " points of damage!" \
		<< std::endl;
	this->hp_ -= amount;
}

void	ClapTrap::beRepaired(int amount)
{
	if (this->hp_ <= 0 || this->ep_ <= 0)
	{
		if (this->hp_ <= 0)
			std::cout << "ClapTrap is out of hit points!" << std::endl;
		else
			std::cout << "ClapTrap is out of energy points!" << std::endl;
		return;
	}
	this->hp_ += amount;
	this->ep_ -= 1;
	std::cout \
		<< "ClapTrap " << this->name_ << " has been repaired. Got " \
		<< amount << " hit points." \
		<< std::endl;
}
