#include "ShrubberyCreationForm.hpp"
#include <fstream>
SCF::SCF(std::string target) : Form(target, 145, 137) {
	std::cout << "Constructor for Shrubbery Creation Form\n";
}

void SCF::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::string const nameFile = this->getName() + "_shrubbery";
	std::fstream fd;
	fd.open(nameFile.c_str(), std::ios::app | std::ios::out);
	//std::ofstream outfile (nameFile, std::ios::app | std::ios::out);
	fd << "         *\n" \
	"        /|\\\n" \
	"       /*|O\\\n" \
	"      /*/|\\*\\\n" \
	"     /X/O|*\\X\\\n" \
	"    /*/X/|\\X\\*\\\n" \
	"   /O/*/X|*\\O\\X\\\n" \
	"  /*/O/X/|\\X\\O\\*\\\n" \
	" /X/O/*/X|O\\X\\*\\O\\\n" \
	"/O/X/*/O/|\\X\\*\\O\\X\\\n" \
	"        |X|\n" \
	"        |X|\n";
	fd << std::endl;
	fd.close();
}

SCF::~SCF() {
	std::cout << "Destructor for Shrubbery Creation Form\n";
}
