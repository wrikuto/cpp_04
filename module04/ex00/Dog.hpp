#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
	private:
		std::string	dog_name_;
		Dog();

	public:
		Dog(std::string name);
		~Dog();
		Dog	&operator=(const Dog &src);
		void		makeSound() const;
		std::string	getType() const; 
};

#endif