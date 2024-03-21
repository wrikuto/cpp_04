#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal	hoge("test");
	Animal 	*cat = new Cat("maro");
	Animal	*dog = new Dog("shou");

	std::cout << "\n" << hoge.getType() << ": ";
	hoge.makeSound();
	std::cout << cat->getType() << ": ";
	cat->makeSound();
	std::cout << dog->getType() << ": ";
	dog->makeSound();

	std::cout << std::endl;

	delete cat;
	delete dog;

	return (0);
}

__attribute__((destructor))
static void destructor() {
    system("leaks -q a.out");
}
