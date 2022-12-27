#include "Intern.hpp"

Intern::Intern(){
	std::cout<< "Intern default constructor called\n";
}

Form* Intern::makeForm(std::string name_form, std::string target){
	std::string formNames[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	int i = 0;
	while (i < 3 && formNames[i] != name_form)
		i++;
	Form* tmp = NULL;
	switch (i){
		case 0:
				tmp = new SCF(target);
				break ;
		case 1:
				tmp = new RRF(target);
				break ;
		case 2:
				tmp = new PPF(target);
				break ;
		default:
				throw (Intern::InvalidNameException());
	}
	std::cout<< "Intern creates " << name_form << std::endl;
	return tmp;
}

Intern::Intern(const Intern &Intern){
	std::cout<< "Intern copy constructor called\n";
	*this = Intern;
}

Intern& Intern::operator=(const Intern& f){
	std::cout<< "Inter copy assignment operator called\n";
	(void)f;
	return (*this);
}

Intern::~Intern(){
	std::cout<< "Intern destructor called\n";
}

const char* Intern::InvalidNameException::what() const throw(){
	return "InternException: Invalid name";
}