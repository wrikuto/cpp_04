#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat &src);
		~WrongCat();
		WrongCat	&operator=(WrongCat const &src);
		void		makeSound() const;
		// std::string	getType() const; 
};

#endif