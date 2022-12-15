#include "Brain.hpp"

Brain::Brain(){
	std::cout<< "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain &Brain) {
	std::cout<< "Brain copy constructor" << std::endl;
	*this = Brain;
}

Brain& Brain::operator=(const Brain& f){
	int	i = -1;
	std::cout<< "Brain copy assignment operator" << std::endl;
	if (this == &f)
		return (*this);
	while (++i < 100)
		this->_ideas[i] = f.getIdea(i);
	return (*this);
}

std::string	Brain::getIdea(int i) const{
	return (this->_ideas[i]);
}

void Brain::setIdea(std::string idea, int i){
	this->_ideas[i] = idea;
}

Brain::~Brain(){
	std::cout<< "Brain destructor" << std::endl;
}