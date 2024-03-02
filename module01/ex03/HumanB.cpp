#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name_ = name;
	this->weapon_ = nullptr;
}

HumanB::~HumanB()
{}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon_ = &weapon;
}

void	HumanB::attack() const
{
	if (this->weapon_ != nullptr && this->weapon_->getType() != "")
	{
		std::cout \
			<< this->name_ << " attacks with their " << this->weapon_->getType() \
			<< std::endl;
	}
	else
		std::cout << "HumanB not have weapon." << std::endl;
}
