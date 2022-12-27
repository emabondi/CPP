#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RRF::RRF(std::string target) : Form(target, 72, 45) {
	std::cout << "Constructor for Robotomy Request Form\n";
}

void RRF::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::cout << "* VRRRRR BZZZZZZ VRRRRRR *" << std::endl;
	if ((rand() % 100) > 50)
		std::cout << this->getName() << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->getName() << " robotomization is a failure" << std::endl;
}

RRF::~RRF() {
	std::cout << "Destructor for Robotomy Request Form\n";
}