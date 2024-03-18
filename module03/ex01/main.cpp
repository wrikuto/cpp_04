#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	man1("Jonny");
	// ScavTrap	test;


	// test = man1;

	man1.attack("Jack");
	man1.guardGate();
	man1.takeDamage(100);
	man1.beRepaired(5);

	// test.attack("hoo");

	return (0);
}
