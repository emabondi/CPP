#include "Form.hpp"

Form::Form(std::string const &name, const int grade_toSign, const int grade_toExec) : _name(name), _signed(false), _grade_toSign(grade_toSign), _grade_toExec(grade_toExec) {
	std::cout<< "Form parameters constructor\n";
	if (grade_toSign < 1 || grade_toExec < 1)
		throw (Form::GradeTooHighException());
	if (grade_toSign > 150 || grade_toExec > 150)
		throw (Form::GradeTooLowException());
}

Form::Form() : _name("Blank Form"), _signed(false), _grade_toSign(150), _grade_toExec(150) {
	std::cout<< "Form default constructor\n";
}

Form::Form(const Form &Form) : _grade_toSign(150), _grade_toExec(150) {
	std::cout<< "Form copy constructor called\n";
	*this = Form;
}

Form& Form::operator=(const Form& f){
	std::cout<< "Form copy assignment operator\n";
	(void)f;
	return (*this);
}

Form::~Form(){
	std::cout<< "Form destructor\n";
}

const std::string Form::getName() const{
	return (this->_name);
}

std::string Form::getifSigned() const{
	if (_signed == true)
		return ("true");
	return ("false");
}

int Form::get_gradeToSign() const{
	return (this->_grade_toSign);
}

int Form::get_gradeToExec() const{
	return (this->_grade_toExec);
}

void	Form::beSigned(const Bureaucrat &bur){
	if (bur.getGrade() <= this->_grade_toSign){
		bur.signForm(*this);
		this->_signed = true;
	}
	else
		throw (Form::GradeTooLowException());
}

const char* Form::GradeTooLowException::what() const throw(){
	return "FormException: Grade too Low";
}

const char* Form::GradeTooHighException::what() const throw(){
	return "FormException: Grade too high";
}

std::ostream &operator<<(std::ostream &out, Form const &an)
{
	out << "Form: " << an.getName() << ", Signed: " << an.getifSigned() << " (Grade to sign: " << an.get_gradeToSign() << ", Grade to execute: " << an.get_gradeToExec() << ")\n";
	return (out);
}