#include "Dog.hpp"

Dog::Dog(){
	std::cout<< "Dog default constructor" << std::endl;
	this->_br = new Brain();
	Animal::_type = "Dog";
}

Dog::Dog(const Dog &toCopy): Animal(toCopy){
	std::cout<< "Dog copy constructor" << std::endl;
	this->_br = new Brain();
	copyBrain(toCopy.getBrain());
}

Dog& Dog::operator=(const Dog& f){
	std::cout<< "Dog copy assignment operator" << std::endl;
	this->_type = f._type;
	return (*this);
}

void Dog::makeSound() const {
	std::cout<< "WOOF WOOF!\n";
}

Brain* Dog::getBrain() const{
	return (this->_br);
}

void Dog::copyBrain(Brain* toCopy){
	int	i = -1;
	while (++i < 100)
		this->_br->setIdea(toCopy->getIdea(i), i);
}

Dog::~Dog(){
	std::cout<< "Dog destructor" << std::endl;
	delete (this->_br);
}
