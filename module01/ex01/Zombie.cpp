#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name_ << " has been destroyed." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name_ = name;
}
