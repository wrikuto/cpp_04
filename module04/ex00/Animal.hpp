#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
	protected:
		std::string	type_;

	public:
		Animal();
		Animal(Animal const &src);
		virtual ~Animal();
		Animal	&operator=(Animal const &src);
		std::string getType() const;
		virtual void		makeSound() const;
};

#endif
