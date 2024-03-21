#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
	protected:
		std::string	type_;
		Animal();

	public:
		Animal(std::string type);
		virtual ~Animal();
		Animal	&operator=(const Animal &src);
		virtual void		makeSound() const;
		virtual std::string getType() const;
};

#endif
