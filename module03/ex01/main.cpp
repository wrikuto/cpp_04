#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	man1("Jonny");
	ScavTrap	test;


	test = man1;

	man1.attack("Jack");
	man1.takeDamage(5);
	man1.beRepaired(5);
	man1.guardGate();

	test.attack("hoo");

	return (0);
}
