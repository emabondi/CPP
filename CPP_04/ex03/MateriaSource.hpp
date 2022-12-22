#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <string>

class MateriaSource : public IMateriaSource
{

public:
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	MateriaSource &operator=(const MateriaSource &rhs);

	virtual ~MateriaSource(void);
	virtual void learnMateria(AMateria *materia);
	virtual AMateria *createMateria(std::string const& type);

private:
	AMateria* _memory[4];
};

#endif