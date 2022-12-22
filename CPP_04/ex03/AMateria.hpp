#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include <string>
#include "Character.hpp"
#include "MateriaSource.hpp"

class Character;
class ICharacter;
class MateriaSource;
class IMateriaSource;

class AMateria{
	protected:
		std::string _type;

	public:
		AMateria();
		AMateria(const AMateria &toCopy);
		AMateria& operator=(const AMateria& f);
		virtual ~AMateria();
		AMateria(std::string const & type);
		//[...]
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif