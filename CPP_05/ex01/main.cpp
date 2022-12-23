#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (){
	Bureaucrat atavico("Atavico", 130);
	Form a;
	Form b("Inutile", 125, 125);

	a.beSigned(atavico);
	a.beSigned(atavico);
	try{
		b.beSigned(atavico);
	}
	catch (std::exception const &e) {
		std::cout<< "*catch* non ho potuto firmare il form\n";
	}
	std::cout << a << b;

	try{
		Form c("Prova", 0, 100);
	}
	catch (std::exception const &e){
		std::cout << "Non ho pututo creare il form\n";
	}

}