#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal{
	public:
		virtual std::string	getType() const;
		virtual void makeSound() const = 0;

	protected:
		Animal();
		Animal(const Animal &Animal);
		Animal& operator = (const Animal& f);
		std::string	_type;
		virtual ~Animal();
};

#endif