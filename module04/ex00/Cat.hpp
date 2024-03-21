#ifndef CAT_HPP
# define CAT_HP

# include "Animal.hpp"

class Cat: public Animal
{
	private:
		std::string	cat_name_;
		Cat();

	public:
		Cat(std::string name);
		~Cat();
		Cat	&operator=(const Cat &src);
		void		makeSound() const;
		std::string	getType() const; 
};

#endif
