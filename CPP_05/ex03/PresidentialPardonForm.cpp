#include "PresidentialPardonForm.hpp"

PPF::PPF(std::string target) : Form(target, 25, 5) {
	std::cout << "Constructor for Presidential Pardon Form\n";
}

void PPF::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox\n";
}

PPF::~PPF() {
	std::cout << "Destructor for Presidential Pardon Form\n";
}
