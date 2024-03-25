#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap	hoge("foooo");
	ScavTrap	man1("Jonny");

	std::cout << std::endl;

	hoge.attack("jeb");
	hoge.takeDamage(5);
	hoge.beRepaired(5);
	hoge.takeDamage(10);
	hoge.beRepaired(5);

	std::cout << std::endl;

	man1.attack("Jack");
	man1.guardGate();
	man1.takeDamage(95);
	man1.beRepaired(5);
	man1.takeDamage(10);
	man1.beRepaired(5);

	std::cout << std::endl;

	return (0);
}
