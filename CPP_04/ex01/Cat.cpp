#include "Cat.hpp"

Cat::Cat(){
	std::cout<< "Cat default constructor" << std::endl;
	this->_br = new Brain();
	Animal::_type = "Cat";
}

Cat::Cat(const Cat &toCopy): Animal(toCopy){
	std::cout<< "Cat copy constructor" << std::endl;
	this->_br = new Brain();
	copyBrain(toCopy.getBrain());
}

Cat& Cat::operator=(const Cat& f){
	std::cout<< "Cat copy assignment operator" << std::endl;
	this->_type = f._type;
	return (*this);
}

Brain* Cat::getBrain() const{
	return (this->_br);
}

void Cat::copyBrain(Brain* toCopy){
	int	i = -1;
	while (++i < 100)
		this->_br->setIdea(toCopy->getIdea(i), i);
}

Cat::~Cat(){
	std::cout<< "Cat destructor" << std::endl;
	delete (this->_br);
}
