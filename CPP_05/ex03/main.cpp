#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main (){
Intern someRandomIntern;
Form* rrf;
rrf = someRandomIntern.makeForm("robotomy request", "Bender");
delete (rrf);
}
