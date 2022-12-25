#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade) {
	std::cout<< "Bureaucrat grade constructor\n";
	if (grade < 1)
		throw (Bureaucrat::GradeTooLowException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooHighException());
}

Bureaucrat::Bureaucrat() : _name("Unknown Bureaucrat"), _grade(150) {
	std::cout<< "Bureaucrat default constructor\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &Bureaucrat){
	std::cout<< "Bureaucrat copy constructor called\n";
	*this = Bureaucrat;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& f){
	std::cout<< "Bureaucrat copy assignment operator\n";
	(void)f;
	//this->_name = f._name;
	//this->_grade = f._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(){
	std::cout<< "Bureaucrat destructor\n";
}
const std::string Bureaucrat::getName() const{
	return (this->_name);
}

int Bureaucrat::getGrade() const{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade(){
	if (this->_grade == 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade(){
	if (this->_grade == 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade++;
}

void Bureaucrat::signForm(Form &form) const{
	if (form.getifSigned() == "true")
		std::cout << this->getName() << " cannot sign " << form.getName() << " because the form is already signed.\n";
	else if (this-> _grade > form.get_gradeToSign())
		std::cout << this->getName() << " cannot sign " << form.getName() << " because it's grade is too low.\n";
	else
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
}

void Bureaucrat::executeForm(Form const & form) const
{
	if (form.getifSigned() == "false")
	{
		std::cout << *this << " cannot execute " << form << " because the form is unsigned." << std::endl;
	}
	else if (form.get_gradeToExec() < this->_grade)
	{
		std::cout << *this << " cannot execute " << form << " because it's grade is too low." << std::endl;
	}
	else
	{
		std::cout << *this << " executes " << form << std::endl;
	}
	form.execute(*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "BureaucratException: Grade too Low";
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "BureaucratException: Grade too high";
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &an)
{
	out << "Bureaucrat " << an.getName() << " (Grade " << an.getGrade() << ")";
	return (out);
}
