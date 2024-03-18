#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	man1("Jonny");
	// ClapTrap	test;

	man1.attack("Jack");
	man1.takeDamage(10);
	man1.takeDamage(10);
	man1.takeDamage(10);
	man1.beRepaired(5);

	// test = man1;

	// test.attack("hoo");

	return (0);
}
