#include "FragTrap.hpp"

int main(void)
{
	FragTrap	man1("Jonny");
	FragTrap	test;

	man1.attack("Jack");
	man1.takeDamage(5);
	man1.beRepaired(5);
	man1.highFivesGuys();

	test = man1;
	test.attack("hoo");
}
