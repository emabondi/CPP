#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &WrongAnimal);
		WrongAnimal& operator = (const WrongAnimal& f);
		virtual std::string	getType() const;
		virtual void makeSound() const;
		virtual ~WrongAnimal();

	protected:
		std::string	_type;
};

#endif