#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap	man1("Jonny");
	// ClapTrap	man2;

	std::cout << std::endl;

	man1.attack("jeb");
	man1.takeDamage(5);
	man1.beRepaired(5);
	man1.takeDamage(10);
	man1.beRepaired(5);

	std::cout << std::endl;

	return (0);
}
