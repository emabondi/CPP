#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main (){
Intern someRandomIntern;
Bureaucrat perrons("Perrone", 1);
Form* rrf;
rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
rrf->beSigned(perrons);
rrf->execute(perrons);
delete (rrf);
}
