#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main (){
	Bureaucrat ilsupremo_ebassi("ebassi", 1);
	Bureaucrat inutile("smidollato", 150);
	PPF form1("smidollo1");
	RRF form2("smidollo2");
	SCF form3("smidollo3");

	form1.beSigned(ilsupremo_ebassi);
	form2.beSigned(ilsupremo_ebassi);

	try{
		form3.execute(ilsupremo_ebassi);
	}
	catch(const std::exception& e) {
		std::cout<< "Exception perchè non è firmato\n";
	}
	
	form3.beSigned(ilsupremo_ebassi);

	try{
		form3.execute(inutile);
	}
	catch(const std::exception& e) {
		std::cout<< "Exception perchè il grado è troppo basso\n";
	}
	
	form1.execute(ilsupremo_ebassi);
	form2.execute(ilsupremo_ebassi);
	form3.execute(ilsupremo_ebassi);
}