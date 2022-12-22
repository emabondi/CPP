#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i=0; i < 4; i++)
		this->_memory[i] = 0;
	std::cout << "Default constructor called for MateriaSource!\n";
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i=0; i < 4; i++)
	{
		if (copy._memory[i])
			this->_memory[i] = copy._memory[i]->clone();
		else
			this->_memory[i] = 0;
	}
	std::cout << "Copy constructor called for MateriaSource!\n";
	*this = copy;
}

MateriaSource::~MateriaSource(void)
{
	for (int i=0; i < 4; i++)
		if (this->_memory[i]) delete this->_memory[i];
	std::cout << "Destructor called for MateriaSource!\n";
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
	for (int i=0; i < 4; i++)
		this->_memory[i] = other._memory[i];
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i=0; i < 4; i++)
	{
		if (this->_memory[i] == NULL)
		{
			this->_memory[i] = materia;
			std::cout << "Materia " << materia->getType() << " learned!\n";
			return ;
		}
	}
	std::cout << "Couldn't learn this materia because my memory is full!\n";
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 3; i >= 0; i--) {
		if (this->_memory[i] && this->_memory[i]->getType() == type) 
		{
			std::cout << "Materia source created " << type << std::endl;
			return this->_memory[i]->clone();
		}
	}
	std::cout << "Materia source cannot create " << type << ". Not learned.\n";
	return NULL;
}