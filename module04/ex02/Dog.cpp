#include <iostream>
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	std::cout << "--Dog default constructor called." << std::endl;
	this->type_ = "Dog";
	this->brain_ = new Brain();
	this->setBrain("Dog idea.");
}

Dog::Dog(Dog const &src)
{
	std::string	tmp_idea;

	tmp_idea = src.brain_->getIdeas()[0];
	std::cout << "--Dog copy constructor called." <<  std::endl;
	this->brain_ = new Brain();
	this->brain_->setIdeas(tmp_idea);
	*this = src;
}

Dog::~Dog()
{
	std::cout << "--Dog destructor called." << std::endl;
	delete this->brain_;
}

Dog	&Dog::operator=(Dog const &src)
{
	std::cout << "--Dog operator overload called." << std::endl;
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

void	Dog::makeSound() const
{
	std::cout << "myaaah" << std::endl;
}

void	Dog::setBrain(std::string idea) const
{
	this->brain_->setIdeas(idea);
}

void	Dog::showIdea() const
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

void	Dog::brainAddr() 
{
	std::cout << "Dog brain ADDR: " << this->brain_ << std::endl;
}