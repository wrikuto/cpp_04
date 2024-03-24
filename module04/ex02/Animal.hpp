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
		std::string 	getType() const;
		virtual void	makeSound() const;
		virtual void	setBrain(std::string idea) const = 0;
		virtual void	showIdea() const = 0;
};

#endif
