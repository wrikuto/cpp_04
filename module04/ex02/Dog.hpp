#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain	*brain_;

	public:
		Dog();
		Dog(Dog const &src);
		~Dog();
		Dog	&operator=(Dog const &src);
		void	makeSound() const;
		void	setBrain(std::string idea) const;
		void	showIdea() const;
		void	brainAddr();
};

#endif
