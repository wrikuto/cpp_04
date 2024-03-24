#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
	protected:
		std::string	type_;

	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal &src);
		virtual ~WrongAnimal();
		WrongAnimal	&operator=(WrongAnimal const &src);
		void		makeSound() const;
		std::string	getType() const; 
};

#endif