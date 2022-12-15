#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal{
	public:
		Animal();
		Animal(std::string name);
		Animal(const Animal &Animal);
		Animal& operator = (const Animal& f);
		virtual std::string	getType() const;
		virtual void makeSound() const;
		virtual ~Animal();

	protected:
		std::string	_type;
};

#endif