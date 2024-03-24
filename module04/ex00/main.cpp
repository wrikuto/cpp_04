#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	Animal	test = *i;
	Animal	test2(*i);

	std::cout << std::endl;

	std::cout << "Animal getType(): " << meta->getType() << " " << std::endl;
	std::cout << "Dog getType(): " << j->getType() << " " << std::endl;
	std::cout << "Cat getType(): " << i->getType() << " " << std::endl;
	std::cout << "test getType(): " << test.getType() << " " << std::endl;
	std::cout << "test2 getType(): " << test2.getType() << " " << std::endl;
	

	std::cout << std::endl;

	meta->makeSound();
	i->makeSound();
	j->makeSound();

	std::cout << std::endl;

	const WrongAnimal *wrong_animal = new WrongAnimal();
	const WrongCat *wrong_cat= new WrongCat();

	std::cout << std::endl;

	std::cout \
		<< "WrongAnimal getType(): " << wrong_animal->getType() << " " \
		<< std::endl;
	std::cout \
		<< "WrongCat getType(): " << wrong_cat->getType() << " " \
		<< std::endl;

	std::cout << std::endl;
	
	wrong_animal->makeSound();
	wrong_cat->makeSound();

	std::cout << std::endl;

	delete meta;
	delete i;
	delete j;
	delete wrong_animal;
	delete wrong_cat;

	return (0);

}

// __attribute__((destructor))
// static void destructor() {
//     system("leaks -q animal_0");
// }
