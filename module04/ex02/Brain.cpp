#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	size_t	i = 0;

	this->ideas = new std::string[100];
	while (i < 100)
	{
		this->ideas[i] = "No idea.";
		i++;
	}
	std::cout << "--Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
	delete [] (this->ideas);
	std::cout << "--Brain Destructor called" << std::endl;
}

Brain::Brain(Brain &src)
{
	size_t		i = 0;
	std::string *tmp_ideas = src.getIdeas();

	std::cout << "--Brain copy constructor called." << std::endl;
	this->ideas = new std::string[100];
	while (i < 100)
	{
		this->ideas[i] = tmp_ideas[i];
		i++;
	}
}

Brain &Brain::operator=(Brain const &src)
{
	std::cout << "--Brain operator overload called." << std::endl;
	if (this == &src)
		return (*this);
	size_t	i = 0;

	while (i < 100)
	{
		this->ideas[i] = src.ideas[i];
		i++;
	}
	return (*this);
}

void		Brain::setIdeas(std::string idea)
{
	size_t	i = 0;

	while (i < 100)
	{
		this->ideas[i] = idea;
		i++;
	}
}

std::string *Brain::getIdeas()
{
	return (this->ideas);
}