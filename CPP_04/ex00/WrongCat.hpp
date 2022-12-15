#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal {
	public:
		WrongCat();
		WrongCat(std::string name);
		WrongCat(const WrongCat &WrongCat);
		WrongCat& operator = (const WrongCat& f);
		~WrongCat();
};

#endif