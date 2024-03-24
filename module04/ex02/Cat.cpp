#include <iostream>
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	std::cout << "--Cat default constructor called." << std::endl;
	this->type_ = "Cat";
	this->brain_ = new Brain();
	this->setBrain("Cat idea.");
}

Cat::Cat(Cat const &src)
{
	std::string	tmp_idea;

	tmp_idea = src.brain_->getIdeas()[0];
	std::cout << "--Dog copy constructor called." <<  std::endl;
	this->brain_ = new Brain();
	this->brain_->setIdeas(tmp_idea);
	*this = src;
}

Cat::~Cat()
{
	std::cout << "--Cat destructor called." << std::endl;
	delete this->brain_;
}

Cat	&Cat::operator=(Cat const &src)
{
	std::cout << "--Cat operator overload called." << std::endl;
	if (this == &src)
		return (*this);
	std::string tmp_idea;

	tmp_idea = this->brain_->getIdeas()[0];
	this->type_ = src.type_;
	delete this->brain_;
	this->brain_ = new Brain(*src.brain_);
	this->brain_->setIdeas(tmp_idea);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "myaaah" << std::endl;
}

void	Cat::setBrain(std::string idea) const
{
	this->brain_->setIdeas(idea);
}

void	Cat::showIdea() const
{
	size_t		i = 0;
	std::string	*tmp_ideas;

	tmp_ideas = brain_->getIdeas();
	while (i < 100)
	{
		std::cout << tmp_ideas[i] << "\n";
		i++;
	}
	std::cout << std::endl;
}

void	Cat::brainAddr() 
{
	std::cout << "Cat brain ADDR: " << this->brain_ << std::endl;
}