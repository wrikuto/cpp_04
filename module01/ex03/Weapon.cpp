#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type_ = type;
}

Weapon::~Weapon()
{};

std::string	Weapon::getType() const
{
	return (this->type_);
}

void	Weapon::setType(std::string type)
{
	this->type_ = type;
}
