#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

#include <iostream>

class Cat: public Animal
{
	private:
		Brain	*brain_;

	public:
		Cat();
		Cat(Cat const &src);
		~Cat();
		Cat	&operator=(Cat const &src);
		void	makeSound() const;
		void	setBrain(std::string idea) const;
		void	showIdea() const;
		void	brainAddr();
};

#endif
