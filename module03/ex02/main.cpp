#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap	man1("Jonny");
	// FragTrap	test;
	// ScavTrap	s_man("soma");

	man1.takeDamage(95);
	man1.highFivesGuys();
	man1.attack("Jack");
	man1.takeDamage(5);
	man1.beRepaired(5);
	
	// test = man1;
	// test.attack("hoooo");

	// s_man.takeDamage(95);
	// s_man.attack("Jack");
	// s_man.takeDamage(5);
	// s_man.beRepaired(5);
	
	return (0);
}
