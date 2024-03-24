#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	protected:
		std::string	*ideas;

	public:
		Brain();
		~Brain();
		Brain(Brain &src);
		Brain &operator=(Brain const &src);
		void		setIdeas(std::string idea);
		std::string	*getIdeas();
};

#endif
