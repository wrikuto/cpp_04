#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap	hoge("foooo");
	FragTrap	man1("Jonny");
	ScavTrap	s_man("soma");

	std::cout << std::endl;

	hoge.attack("jeb");
	hoge.takeDamage(5);
	hoge.beRepaired(5);
	hoge.takeDamage(10);
	hoge.beRepaired(5);

	std::cout << std::endl;

	man1.takeDamage(95);
	man1.highFivesGuys();
	man1.attack("Jack");
	man1.takeDamage(5);
	man1.beRepaired(5);

	std::cout << std::endl;

	s_man.takeDamage(95);
	s_man.attack("Jack");
	s_man.guardGate();
	s_man.takeDamage(5);
	s_man.beRepaired(5);

	std::cout << std::endl;
	
	return (0);
}
